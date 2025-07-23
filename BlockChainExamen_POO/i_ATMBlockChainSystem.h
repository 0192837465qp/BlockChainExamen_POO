#include<iostream>
#include<string>
#include"entity.h"
#include"node.h"

#pragma once
class i_ATMBlockChainSystem
{
public:
	//virtual void sendCoins(entity sender, entity receiver) = 0;
	virtual void processTansactions(std::string transactionsFilename) = 0;
	virtual void processEntity(std::string entityFilename) = 0;
	virtual void processTransactionBlock(std::string blkTrs) = 0;
	virtual void createNodesAndWorkers(std::string nodeFile) = 0;
	virtual void createindividualNode(node& newNode, std::string nodeNumFilename) = 0;
	virtual node calculateNodeToRoute() = 0;
};

