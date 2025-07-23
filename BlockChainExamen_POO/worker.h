#include<iostream>
#include<string>
#include"i_worker.h"

#pragma once
class worker:public i_worker
{
private:
	int rataProcesare;
	int rataConsum;
public:
	worker(int RP,int RC):
		rataProcesare(RP),rataConsum(RC) { }
	int returnPowerConsumption()override;
	int returnProcessingrate()override;
	void setPowerConsumption(int a)override;
	void setProcessingrate(int a)override;
	int returnDiff()override;
};

