#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name) : Person(name)
{
	this->grower = new Grower("Gray");
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> order)
{
	
	std::cout << this->getName() << " forwards request to " << grower->getName() << std::endl;
	FlowersBouquet* fb = grower->prepareOrder(order);
	std::cout << grower->getName() << " returns flowers to " << this->getName() << std::endl;

	return fb;

}

std::string Wholesaler::getName() {
	return "Wholesaler " + Person::getName();
}