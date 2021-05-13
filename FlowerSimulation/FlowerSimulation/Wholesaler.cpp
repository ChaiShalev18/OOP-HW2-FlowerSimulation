#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name) : Person(name)
{
}

void Wholesaler::acceptOrder(std::vector<std::string>* order)
{
	// TODO
}

std::string Wholesaler::getName() {
	return "Florist " + Person::getName();
}