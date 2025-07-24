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

void node::printInfo()
{
	std::cout << "Node:" << this->nodeNumber << std::endl;
	std::cout << this->timer << std::endl;
	for (int i = 0; i < this->workers.size(); i++)
	{
		this->workers[i]->printInfo();
		std::cout << std::endl;
	}

}

