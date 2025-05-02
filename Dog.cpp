#include "Dog.h"

Dog::Dog(const std::string& name,
         int age,
         int hungerLevel,
         const std::string& breed)
    : Pet(name, "Dog", age, hungerLevel), breed(breed) {}

void Dog::makeSound() const {
    std::cout << getName() << " barks: Woof! Woof!\n";
}

void Dog::printInfo() const {
    Pet::printInfo();
    std::cout << "Breed: " << breed << "\n";
}
