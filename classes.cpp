//
// Created by JWang on 4/29/18.
//

#include <iostream>
#include "class/Cat.h"

void classDrive() {

    Cat cat("tiger", 6);

    cout << cat.getName() << ", age " << cat.getAge()
         << endl;

    cat.talk();

}
