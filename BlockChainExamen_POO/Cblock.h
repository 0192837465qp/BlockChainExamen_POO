#include<iostream>
#include<string>
#include<vector>
#include"transaction.h"
#pragma once
class Cblock
{
private:
	std::vector<transaction>listaTranzactii;
	int sumaControl;
public:
	Cblock(std::vector<transaction>listaTranzactii):
		listaTranzactii(listaTranzactii){ }
};

