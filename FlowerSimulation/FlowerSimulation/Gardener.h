#pragma once
#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
	std::string getName();
};

