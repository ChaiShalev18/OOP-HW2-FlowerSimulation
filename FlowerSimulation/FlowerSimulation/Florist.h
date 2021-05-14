#pragma once 
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person
{
private:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;
public:
    Florist(std::string);
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName();
};