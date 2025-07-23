#include "ATMBlockChainSystem.h"
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include"BlockChainData.h"
#include"Cblock.h"
#include"transaction.h"
#include"worker.h"
#include"entity.h"
#include"i_ATMBlockChainSystem.h"
#include"node.h"


void ATMBlockChainSystem::processEntity(std::string entityFilename)
{
	std::ifstream file(entityFilename);
	std::string addr;
	while (file >> addr)
	{
		entity wallet(addr);
		this->ent.push_back(wallet);
	}
	file.close();
}

void ATMBlockChainSystem::processTansactions(std::string transactionsFilename)
{
	std::ifstream file(transactionsFilename);
	std::string filsedescriptor;
	while (file >> filsedescriptor)
	{
		processTransactionBlock(filsedescriptor);
		//1
	}
}

void ATMBlockChainSystem::processTransactionBlock(std::string blkTrs)
{
	std::ifstream nodefile(blkTrs);
	std::string addr1, addr2;
	int value;
	while (nodefile >> addr1 >> addr2 >> value)
	{
		node newNode = calculateNodeToRoute();
	}
}

void ATMBlockChainSystem::createNodesAndWorkers(std::string nodeFile)
{
	std::ifstream nodenumfile(nodeFile);
	std::string nodeNum;
	int counter = 1;
	while (nodenumfile >> nodeNum)
	{
		node newNode(counter);
		createindividualNode(newNode, nodeNum);
		this->nodes.push_back(newNode);
		counter++;
	}
}

void ATMBlockChainSystem::createindividualNode(node &newNode,std::string nodeNumFilename)
{
	std::ifstream Node(nodeNumFilename);
	std::string type;
	int rateProcess, rateConsumption;
	while (Node >> type >> rateProcess >> rateConsumption)
	{
		if (type == "G")
		{
			newNode.addNewGPUWorker(rateProcess, rateConsumption);
		}
		else if (type == "A")
		{
			newNode.addNewASICWorker(rateProcess, rateConsumption);
		}
	}
}

int returnMax(std::vector<int>v)
{
	int max = 0,index=0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
		{
			max = v[i];
			index = i;
		}
	}
	return index;
}

node ATMBlockChainSystem::calculateNodeToRoute()
{
	std::vector<int> efficency;
	for (int i = 0; i < this->nodes.size(); i++)
	{
		int eff=this->nodes[i].returnWorkersEfficiency();
		efficency.push_back(eff);
	}
	int index = returnMax(efficency);
	return this->nodes[index];
}
