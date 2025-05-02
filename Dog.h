#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include <string>

class Dog : public Pet {
private:
    std::string breed;

public:
    Dog(const std::string& name, int age, int hungerLevel, const std::string& breed);

    // Override behavior
    void makeSound() const override;
    void printInfo()  const override;
};

#endif
