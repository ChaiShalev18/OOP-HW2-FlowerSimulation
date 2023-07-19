#include "Florist.h"
#include <string>
#include <vector>

Florist::Florist(std::string name) : Person(name)
{
	this->wholesaler = new Wholesaler("Witson");
	this->flowerArranger = new FlowerArranger("Flora");
	this->deliveryPerson = new DeliveryPerson("Dylan");

}

void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
	//Florist Fred forwards request to Wholesaler Watson
	std::cout << this->getName() << " forwards request to "<< wholesaler->getName() << std::endl;
	FlowersBouquet* fb = wholesaler->acceptOrder(order);
	std::cout << wholesaler->getName() << " returns flowers to " << this->getName() << std::endl;

	std::cout << this->getName() << " request flowers arrangement from " << flowerArranger->getName() << std::endl;
	FlowersBouquet* fb2 = flowerArranger->arrangeFlowers(fb);
	std::cout << flowerArranger->getName() << " returns arranged flowers to " << this->getName() << std::endl;

	std::cout << this->getName() << " forwards flowers to " << deliveryPerson->getName() << std::endl;
	deliveryPerson->deliver(person,fb2);
}

std::string Florist::getName() {
	return "Florist " + Person::getName();
}
