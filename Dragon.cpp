#include "Dragon.h"

Dragon::Dragon(const std::string& name,
               int age,
               int hungerLevel,
               double wingspan,
               int firePowerLevel)
    : Pet(name, "Dragon", age, hungerLevel),
      wingspan(wingspan),
      firePowerLevel(firePowerLevel) {}

void Dragon::makeSound() const {
    std::cout << getName() << " roars: Rooooaar!\n";
}

void Dragon::printInfo() const {
    Pet::printInfo();
    std::cout << "Wingspan: "       << wingspan << " m\n"
              << "Fire Power Level: "<< firePowerLevel << "/100\n";
}

void Dragon::breatheFire() const {
    std::cout << getName()
              << " breathes a fireball of power "
              << firePowerLevel << "!\n";
}
