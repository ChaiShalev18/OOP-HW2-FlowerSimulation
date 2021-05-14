#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet)
{
	this->bouquet = bouquet;
}

std::string FlowersBouquet::getBouquet()
{
	std::string s;
	for (const auto& piece : bouquet) s += piece+", ";
	return s.substr(0,s.length()-2);
	
}

void FlowersBouquet::arrange()
{
	this->isArranged = true;
}
