//
// Created by JWang on 4/29/18.
//

#include <iostream>
#include "Cat.h"

Cat::Cat(string name, int age) {
    this->name = name;
    this->age = age;
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
