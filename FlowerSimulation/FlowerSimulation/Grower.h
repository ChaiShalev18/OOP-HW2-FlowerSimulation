#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
#include "Gardener.h"

class Grower : public Person
{
private:
	Gardener* gardener;
public:
	Grower(std::string);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
	std::string getName();
};

