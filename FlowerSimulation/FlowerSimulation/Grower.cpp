#include "Grower.h"

Grower::Grower(std::string name) : Person(name)
{
	this->gardener = new Gardener("grower");
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> order)
{
	std::cout << this->getName() << " forwards request to " << gardener->getName() << std::endl;
	FlowersBouquet* fb = gardener->prepareOrder(order);
	std::cout << gardener->getName() << " returns flowers to " << this->getName() << std::endl;

	return fb;
	// TODO
		/*

Grower Gray returns flowers to Wholesaler Watson.
Wholesaler Watson returns flowers to Florist Fred.
Florist Fred request flowers arrangement from Flower Arranger Flora.
Flower Arranger Flora arranges flowers.
Flower Arranger Flora returns arranged flowers to Florist Fred.
3
Florist Fred forwards flowers to Delivery Person Dylan.
Delivery Person Dylan delivers flowers Robin.
Robin accepts the flowers: Roses, Violets, Gladiolus.
	*/
}

std::string Grower::getName() {
	return "Grower " + Person::getName();
}