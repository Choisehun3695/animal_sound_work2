#include "homework2.h"
#include <iostream>

using namespace std;

// Animal Ŭ����
Animal::Animal(){
        cout << "Animal ������ ȣ�� " << endl;
    }
    Animal::~Animal(){
        cout << "Animal �Ҹ��� ȣ��" << endl;
    }

// Dog Ŭ����
Dog :: Dog() {
        cout << "Dog ������ ȣ��" << endl;
    }
    void Dog :: makeSound() const {
        cout << "ohhhhhhhh!" << endl;
    }
    Dog :: ~Dog() {
        cout << "Dog �Ҹ��� ȣ��" << endl;
    }

// Cat Ŭ����
Cat :: Cat() {
        cout << "cat ������ ȣ��" << endl;
    }
    void Cat :: makeSound() const {
        cout << "Meooooooo" << endl;
    }
    Cat :: ~Cat() {
        cout << "cat �Ҹ��� ȣ��" << endl;
    }

// Cow Ŭ����
Cow :: Cow() {
        cout << "cow ������ ȣ��" << endl;
    }
    void Cow :: makeSound() const {
        cout << "Moouuuuuuuu!" << endl;
    }
    Cow :: ~Cow() {
        cout << "cow �Ҹ��� ȣ��" << endl;
    }
