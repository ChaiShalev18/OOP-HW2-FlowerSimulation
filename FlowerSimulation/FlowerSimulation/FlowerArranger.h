#pragma once
#include "FlowersBouquet.h"
#include "Person.h"

class FlowerArranger : public Person
{
public:
	FlowerArranger(std::string);
	FlowersBouquet* arrangeFlowers(FlowersBouquet*);
	std::string getName();
};

