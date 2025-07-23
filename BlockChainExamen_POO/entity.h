#include<iostream>
#include<string>
#include"i_entity.h"
#pragma once
class entity:public i_entity
{
private:
	std::string address;
	std::string key;
public:
	void generateKey()override;
	void printEntity()override;
	entity(std::string addr) :
		address(addr)
	{
		generateKey();
	}


};

