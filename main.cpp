#include <iostream>
#include <vector>

#include "Dog.h"
#include "Cat.h"
#include "Dragon.h"

int main() {
    std::vector<Pet*> zoo;

    zoo.push_back(new Dog("Rex",       3, 6,  "Beagle"));
    zoo.push_back(new Cat("Whiskers",  2, 4,  "String"));
    zoo.push_back(new Dragon("Felix", 100, 2, 15.0, 90));

    // Print info & sounds
    for (Pet* p : zoo) {
        std::cout << "-----\n";
        p->printInfo();
        p->makeSound();
    }

    // Call a unique method on Dragon
    std::cout << "-----\n";
    static_cast<Dragon*>(zoo[2])->breatheFire();

    // Cleanup
    for (Pet* p : zoo) delete p;
    return 0;
}
