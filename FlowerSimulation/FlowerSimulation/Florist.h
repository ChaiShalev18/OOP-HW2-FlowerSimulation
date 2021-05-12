#pragma once 
#include "Person.h"

class Florist : public Person
{
private:
    Wholesaler∗ wholesaler;
    FlowerArranger∗ flowerArranger;
    DeliveryPerson∗ deliveryPerson;
public:
    Florist(std::string);
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName();
};