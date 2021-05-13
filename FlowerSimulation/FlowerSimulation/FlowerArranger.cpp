#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* order)
{
	// TODO
}

std::string FlowerArranger::getName() {
	return "Florist " + Person::getName();
}