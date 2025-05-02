#include "Cat.h"

Cat::Cat(const std::string& name,
         int age,
         int hungerLevel,
         const std::string& toy)
    : Pet(name, "Cat", age, hungerLevel), favoriteToy(toy) {}

void Cat::makeSound() const {
    std::cout << getName() << " meows: Meow~\n";
}

void Cat::printInfo() const {
    Pet::printInfo();
    std::cout << "Favorite Toy: " << favoriteToy << "\n";
}
