#include "BlockChainData.h"

void BlockChainData::addBlockToBlockchain(Cblock newBlock)
{
	this->blockchain.push_back(newBlock);
}
