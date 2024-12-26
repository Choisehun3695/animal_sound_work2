#include "homework2.h"
#include <iostream>

using namespace std;

// Animal 클래스
Animal::Animal(){
        cout << "Animal 생성자 호출 " << endl;
    }
    Animal::~Animal(){
        cout << "Animal 소멸자 호출" << endl;
    }

// Dog 클래스
Dog :: Dog() {
        cout << "Dog 생성자 호출" << endl;
    }
    void Dog :: makeSound() const {
        cout << "ohhhhhhhh!" << endl;
    }
    Dog :: ~Dog() {
        cout << "Dog 소멸자 호출" << endl;
    }

// Cat 클래스
Cat :: Cat() {
        cout << "cat 생성자 호출" << endl;
    }
    void Cat :: makeSound() const {
        cout << "Meooooooo" << endl;
    }
    Cat :: ~Cat() {
        cout << "cat 소멸자 호출" << endl;
    }

// Cow 클래스
Cow :: Cow() {
        cout << "cow 생성자 호출" << endl;
    }
    void Cow :: makeSound() const {
        cout << "Moouuuuuuuu!" << endl;
    }
    Cow :: ~Cow() {
        cout << "cow 소멸자 호출" << endl;
    }
