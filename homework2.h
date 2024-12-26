#ifndef Homework2_H_
#define Homework2_H_

#include <iostream>
using namespace std;

// Animal 클래스
class Animal {
public:
    Animal(); 
    virtual void makeSound() const = 0;
    virtual ~Animal(); // 가상 소멸자
};

// Dog 클래스
class Dog : public Animal {
public:
    Dog();
    void makeSound() const override;
    ~Dog();
};

// Cat 클래스
class Cat : public Animal {
public:
    Cat();
    void makeSound() const override;
    ~Cat();
};

// Cow 클래스
class Cow : public Animal {
public:
    Cow();
    void makeSound() const override;
    ~Cow();
};

#endif

