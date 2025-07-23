#include<iostream>
#include<string>
#include"worker.h"

#pragma once
class ASICworker:public worker
{
public:
	ASICworker(int RP, int RC) :
		worker(RP, RC) {}
	int returnPowerConsumption()override;
	int returnProcessingrate()override;
	//void savetansaction(std::string filename);
};

