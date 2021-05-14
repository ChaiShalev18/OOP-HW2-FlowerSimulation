#pragma once
#include <vector>
#include <string>

class FlowersBouquet
{
private:
	bool isArranged;
	std::vector<std::string> bouquet;
public:
	FlowersBouquet(std::vector<std::string>);
	std::string getBouquet();
	void arrange();
};

