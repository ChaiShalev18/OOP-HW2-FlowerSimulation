#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name) : Person(name)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> order)
{
	// TODO
	return NULL;
}

std::string Wholesaler::getName() {
	return "Wholesaler " + Person::getName();
}