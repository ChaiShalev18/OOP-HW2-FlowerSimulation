#include "Person.h"
#include "Florist.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"

Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
	return name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order)
{
	std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << std::endl;
	florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowersBouquet* fb)
{
	std::cout << this->getName() << " accepts the flowers: " << fb->getBouquet()<< "." << std::endl;

	/*
Robin accepts the flowers: Roses, Violets, Gladiolus.
	*/
}
