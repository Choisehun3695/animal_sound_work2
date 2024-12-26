#include "homework2.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
// test