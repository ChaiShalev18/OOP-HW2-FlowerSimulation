#include "Gardener.h"

Gardener::Gardener(std::string name) : Person(name)
{
}

FlowersBouquet* Gardener::prepareOrder(std::vector<std::string> order)
{
	std::cout << this->getName() << " prepares flowers." << std::endl;
	FlowersBouquet* fb = new FlowersBouquet(order);

	return fb;

}

std::string Gardener::getName() {
	return "Gardener " + Person::getName();
}
