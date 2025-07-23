#include<iostream>
#include<string>

#pragma once
class i_worker
{
public:
	virtual int returnPowerConsumption() = 0;
	virtual int returnProcessingrate() = 0;
	virtual void setPowerConsumption(int a) = 0;
	virtual void setProcessingrate(int a) = 0;
	virtual int returnDiff() = 0;
};

