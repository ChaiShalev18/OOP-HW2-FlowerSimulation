#include "Gardener.h"

Gardener::Gardener(std::string name) : Person(name)
{
}

void Gardener::prepareOrder(std::vector<std::string>* order)
{
	// TODO
}

std::string Gardener::getName() {
	return "Florist " + Person::getName();
}