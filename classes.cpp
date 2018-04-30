//
// Created by JWang on 4/29/18.
//

#include <iostream>
#include "class/Cat.h"

void classDrive() {

    {
        // check destructor
        // ts is out of scope
        Cat *tc = new Cat();        // Note, Cat tc();   NOT working,  and it cannot do tc.getAge() later;   Why had to use new?   Only new calls default-c-tor

        cout << "checking empty object data member : " << tc->getAge() << endl;
    }

    Cat cat("tiger", 6);

    cout << cat.getName() << ", age " << cat.getAge()
         << endl;

    cat.talk();

}
