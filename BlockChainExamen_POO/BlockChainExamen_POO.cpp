#include <iostream>
#include"ATMBlockChainSystem.h"

int main()
{
    ATMBlockChainSystem system;
    
    system.processTansactions("transactions.txt");
    system.processEntity("entity.txt");
    return 0;
}

