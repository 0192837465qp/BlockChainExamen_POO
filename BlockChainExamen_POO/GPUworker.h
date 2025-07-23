#include<iostream>
#include<string>
#include"worker.h"
#include"transaction.h"
#include<vector>

#pragma once
class GPUworker:public worker
{
private:
	std::vector<transaction>transactionList;
public:
	GPUworker(int RP, int RC):
		worker(RP,RC){ }
	int returnPowerConsumption()override;
	int returnProcessingrate()override;
	//void saveTransaction();
};

