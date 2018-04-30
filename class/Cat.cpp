//
// Created by JWang on 4/29/18.
//

#include <iostream>
#include "Cat.h"

Cat::Cat() {
    cout << "default ctor, Cat()" << endl;
}

Cat::Cat(string name, int age) {
    cout << "c-tor, Cat(string, int)" << endl;

    this->name = name;
    this->age = age;
}

Cat::~Cat() {
    cout << "d-tor, ~Cat()" << endl;
}

int Cat::getAge() {
    return age;
}

string Cat::getName() {
    return name;
}

void Cat::talk() {
    cout <<  "cat meows ... " << endl;
}
