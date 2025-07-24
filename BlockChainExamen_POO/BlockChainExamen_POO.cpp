#include <iostream>
#include"ATMBlockChainSystem.h"

int main()
{
    ATMBlockChainSystem system;

    system.processEntity("entity.txt");              
    system.createNodesAndWorkers("nodes.txt");       
    system.processTansactions("transactions.txt");  

    return 0;
}
