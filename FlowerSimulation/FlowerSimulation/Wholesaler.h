#pragma once
#include "FlowersBouquet.h"
#include "Person.h"

class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(std::string);
	FlowersBouquet* acceptOrder(std::vector<std::string>);
	std::string getName();

};

