#ifndef _BITCOIN_H_
#define _BITCOIN_H_ 1

#include "protocol.h"

bool TestNode(const CService& cip, uint64_t& grapheneVersion, uint64_t electronVersion, uint64_t capdVersion, int& ban, int& clientV, std::string& clientSV, int& blocks, std::vector<CAddress>* vAddr);

#endif
