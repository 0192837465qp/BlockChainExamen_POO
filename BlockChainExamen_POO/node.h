#include<iostream>
#include<string>
#include<vector>
#include"i_worker.h"
#include"GPUworker.h"
#include"ASICworker.h"
#include"transaction.h"

#pragma once
class node
{
private:
	std::vector<i_worker*>workers;
	int timer;
	int nodeNumber;
public:
	node(int nodeNumber) :
		nodeNumber(nodeNumber), timer(0) {}
	void addNewGPUWorker(int process,int consumption) {
		workers.push_back(new GPUworker(process, consumption));
	}
	void addNewASICWorker(int process, int consumption) {
		workers.push_back(new ASICworker(process, consumption));
	}
	int returnWorkersEfficiency();
	void createTransaction(std::string addr1,std::string addr2,int value);
};

