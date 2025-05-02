#ifndef DRAGON_H
#define DRAGON_H

#include "Pet.h"

class Dragon : public Pet {
private:
    double wingspan;      // in meters
    int firePowerLevel;   // 0 (none) – 100 (max)

public:
    Dragon(const std::string& name,
           int age,
           int hungerLevel,
           double wingspan,
           int firePowerLevel);

    void makeSound() const override;
    void printInfo()  const override;

    // Unique behavior
    void breatheFire() const;
};

#endif
