#include<iostream>
#include<string>
#include"entity.h"
#include"node.h"
#include"Cblock.h"

#pragma once
class i_ATMBlockChainSystem
{
public:
	virtual void processTansactions(std::string transactionsFilename) = 0;
	virtual void processEntity(std::string entityFilename) = 0;
	virtual Cblock processTransactionBlock(std::string blkTrs, node nod) = 0;
	virtual void createNodesAndWorkers(std::string nodeFile) = 0;
	virtual void createindividualNode(node& newNode, std::string nodeNumFilename) = 0;
	virtual node calculateNodeToRoute() = 0;
};

