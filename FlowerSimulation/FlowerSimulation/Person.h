#pragma once

#include <iostream>
#include <vector>

class Wholesaler; // forward declaration
class FlowerArranger; // forward declaration
class DeliveryPerson; // forward declaration
class Florist; // forward declaration
class Gardener; // forward declaration
class Grower; // forward declaration
class FlowersBouquet; // forward declaration

class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	virtual std::string getName(); // Virtual methods can be re-defined (Overriden) by a derived class
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	void acceptFlowers(FlowersBouquet*);
};
