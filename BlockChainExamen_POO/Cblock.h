#include<iostream>
#include<string>
#include<vector>
#include"transaction.h"
#include"i_Cblock.h"
#pragma once
class Cblock:public i_Cblock
{
private:
	std::vector<transaction>listaTranzactii;
	int sumaControl;
public:
	Cblock(std::vector<transaction>listaTranzactii):
		listaTranzactii(listaTranzactii){ }
	void printInfo()override;
};

