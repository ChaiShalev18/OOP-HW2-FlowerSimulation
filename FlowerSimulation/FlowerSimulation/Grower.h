#pragma once
#include "FlowersBouquet.h"
#include "Person.h"

class Grower : public Person
{
private:
	Gardener* gardener;
public:
	Grower(std::string);
	void prepareOrder(std::vector<std::string>*);
	std::string getName();
};

