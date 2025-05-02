#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include <string>

class Cat : public Pet {
private:
    std::string favoriteToy;

public:
    Cat(const std::string& name, int age, int hungerLevel, const std::string& toy);

    // Override behavior
    void makeSound() const override;
    void printInfo()  const override;
};

#endif
