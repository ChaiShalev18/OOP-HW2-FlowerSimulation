#include "Florist.h"

Florist::Florist(std::string name) : Person(name)
{
}

void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
	// TODO
}

std::string Florist::getName() {
	return "Florist " + Person::getName();
}