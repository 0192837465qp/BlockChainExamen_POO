#include "transaction.h"
#include<iostream>
#include<string>
#include<vector>

void transaction::printInfo()
{
	std::cout << "Receiver:" << this->addrReceiver << "\nSender:" << this->addrSender << std::endl;
	std::cout << "Sender key:" << this->senderKey << "\nvalue - Comission:";
	std::cout << this->value << " - " << this->comission << std::endl;
}

void transaction::calculSumaControl()
{
	this->sumaControl = (stoi(addrSender) + stoi(addrReceiver) + value + (comission)) % /*(stoi(senderKey))*/2;
}
