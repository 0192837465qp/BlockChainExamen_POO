#include "worker.h"

int worker::returnPowerConsumption()
{
	return this->rataConsum;
}

int worker::returnProcessingrate()
{
	return this->rataProcesare;
}

void worker::setPowerConsumption(int a)
{
	this->rataConsum = a;
}

void worker::setProcessingrate(int a)
{
	this->rataProcesare = a;
}

int worker::returnDiff()
{
	return this->rataProcesare-this->rataConsum;
}

void worker::printInfo()
{
	std::cout << this->rataConsum << " - " << this->rataProcesare << std::endl;
}


