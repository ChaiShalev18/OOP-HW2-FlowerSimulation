#include "DeliveryPerson.h"
#include <string>
#include <vector>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name)
{
}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* fb)
{
	std::cout << this->getName() << " delivers flowers to " << person->getName() << std::endl;
	person->acceptFlowers(fb);
	


}

std::string DeliveryPerson::getName() {
	return "Delivery Person " + Person::getName();
}