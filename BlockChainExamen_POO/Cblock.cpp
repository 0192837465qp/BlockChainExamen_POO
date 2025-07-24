#include "Cblock.h"

void Cblock::printInfo()
{
	for (int i = 0; i < this->listaTranzactii.size(); i++)
	{
		this->listaTranzactii[i].printInfo();
	}
}
