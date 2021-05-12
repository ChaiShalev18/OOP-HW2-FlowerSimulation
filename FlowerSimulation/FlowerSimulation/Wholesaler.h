#pragma once
#include "Person.h"

class Wholesaler : public Person
{
private:
	Grower∗ grower;
public:
	FlowerBouquet∗ acceptOrder(std::vector<std::string>);

};

