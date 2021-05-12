#include "Person.h"
#include "Florist.h"


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