#include "node.h"
#include<iostream>
#include<string>
#include<vector>
#include"transaction.h"

int node::returnWorkersEfficiency()
{
	int sum=0;
	for (int i = 0; i < this->workers.size(); i++)
	{
		int diff = this->workers[i]->returnDiff();
		sum = sum + diff;
	}
	return sum;
}

void node::createTransaction(std::string addr1, std::string addr2, int value)
{
	//transaction newTR(addr1, addr2, key, value);
	//TO DO  !!!!!!!!!!!!!!!!!!!!!!!
}
