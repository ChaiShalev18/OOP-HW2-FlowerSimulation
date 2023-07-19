#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name)
{
}

FlowersBouquet* FlowerArranger::arrangeFlowers(FlowersBouquet* order)
{
	std::cout << this->getName() << " arranges flowers."<< std::endl;

	order->arrange();
	return order;
}

std::string FlowerArranger::getName() {
	return "Flower Arranger " + Person::getName();
}
