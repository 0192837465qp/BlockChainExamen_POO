#include<iostream>
#include<string>
#include"i_transaction.h"
#pragma once
class transaction:private i_transaction
{
private:
	std::string addrSender;
	std::string addrReceiver;
	std::string senderKey;
	int value;
	int comission;
	int sumaControl;
public:
	transaction(std::string addrSender, std::string addrReceiver, std::string senderKey, int val) :
		addrSender(addrSender), addrReceiver(addrReceiver), senderKey(senderKey), value(val) {
		comission = int(value / 100);
	}
	void printInfo()override;
	void calculSumaControl()override;

};

