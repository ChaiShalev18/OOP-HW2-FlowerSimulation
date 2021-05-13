#include "Florist.h"
#include <string>
#include <vector>

Florist::Florist(std::string name, Wholesaler* w, FlowerArranger* f, DeliveryPerson* d) : Person(name)
{
	this->wholesaler = w;
	this->flowerArranger = f;
	this->deliveryPerson = d;

}

void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
	//Florist Fred forwards request to Wholesaler Watson
	std::cout << this->getName() << " forwards request to "<< wholesaler->getName() << std::endl;
	FlowersBouquet* fb = wholesaler->acceptOrder(order);
	//florist->acceptOrder(person, order);
}

std::string Florist::getName() {
	return "Florist " + Person::getName();
}