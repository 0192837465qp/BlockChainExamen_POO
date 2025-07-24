#include<iostream>
#include<string>

#pragma once
class i_transaction
{
public:
	virtual void printInfo() = 0;
	virtual void calculSumaControl() = 0;
};

