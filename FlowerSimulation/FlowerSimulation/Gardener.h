#pragma once
#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person
{
public:
	Gardener(std::string);
	void prepareOrder(std::vector<std::string>*);
	std::string getName();
};

