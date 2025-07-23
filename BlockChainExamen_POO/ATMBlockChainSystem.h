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
	void processEntity(std::string entityFilename)override;
	void processTansactions(std::string transactionsFilename)override;
	void processTransactionBlock(std::string blkTrs)override;
	void createNodesAndWorkers(std::string nodeFile)override;
	void createindividualNode(node& newNode, std::string nodeNumFilename)override;
	node calculateNodeToRoute()override;
	//void sendCoins(entity sender, entity receiver)override;
};

