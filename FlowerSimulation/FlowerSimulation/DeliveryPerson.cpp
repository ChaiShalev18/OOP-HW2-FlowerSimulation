#include "DeliveryPerson.h"
#include <string>
#include <vector>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name)
{
}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* order)
{
	// TODO
	
}

std::string DeliveryPerson::getName() {
	return "DeliveryPerson " + Person::getName();
}