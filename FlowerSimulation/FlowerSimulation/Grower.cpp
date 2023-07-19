#include "Grower.h"

Grower::Grower(std::string name) : Person(name)
{
	this->gardener = new Gardener("grower");
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> order)
{
	std::cout << this->getName() << " forwards request to " << gardener->getName() << std::endl;
	FlowersBouquet* fb = gardener->prepareOrder(order);
	std::cout << gardener->getName() << " returns flowers to " << this->getName() << std::endl;

	return fb;
}

std::string Grower::getName() {
	return "Grower " + Person::getName();
}
