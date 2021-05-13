#include "Grower.h"

Grower::Grower(std::string name) : Person(name)
{
}

void Grower::prepareOrder(std::vector<std::string> order)
{
	// TODO
}

std::string Grower::getName() {
	return "Grower " + Person::getName();
}