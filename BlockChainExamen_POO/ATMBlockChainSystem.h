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

#pragma once
class ATMBlockChainSystem:public i_ATMBlockChainSystem
{
private:
	BlockChainData instance;
	std::vector<entity>ent;
	std::vector<node>nodes;
public:
	ATMBlockChainSystem(){}
	//1
	void processEntity(std::string entityFilename)override;
	//2
	void processTansactions(std::string transactionsFilename)override;
	Cblock processTransactionBlock(std::string blkTrs, node nod)override;
	void createNodesAndWorkers(std::string nodeFile)override;
	void createindividualNode(node& newNode, std::string nodeNumFilename)override;
	node calculateNodeToRoute()override;
	
};

