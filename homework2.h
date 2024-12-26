#ifndef Homework2_H_
#define Homework2_H_

#include <iostream>
using namespace std;

// Animal Ŭ����
class Animal {
public:
    Animal(); 
    virtual void makeSound() const = 0;
    virtual ~Animal(); // ���� �Ҹ���
};

// Dog Ŭ����
class Dog : public Animal {
public:
    Dog();
    void makeSound() const override;
    ~Dog();
};

// Cat Ŭ����
class Cat : public Animal {
public:
    Cat();
    void makeSound() const override;
    ~Cat();
};

// Cow Ŭ����
class Cow : public Animal {
public:
    Cow();
    void makeSound() const override;
    ~Cow();
};

#endif

