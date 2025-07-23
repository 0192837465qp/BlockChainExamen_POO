#include "entity.h"
#include<iostream>
#include<string>


void entity::generateKey()
{
	int add = stoi(this->address);
	this->key = ((add << 4) % 255) << 16;
}

void entity::printEntity()
{
	std::cout << this->address << "\n" << this->key;
}
