//
// Created by JWang on 4/29/18.
//

#include <iostream>
#include "class/Cat.h"

void classDrive() {

    {
        cout << "START:__Dynamic default-ctor" << endl;

        // check destructor
        // ts is out of scope
        Cat *tc = new Cat();        // Note, Cat tc();   NOT working,  and it cannot do tc.getAge() later;   Why had to use new?   Only new calls default-c-tor

        cout << "checking empty object data member : " << tc->getAge() << endl;

        // dynamic allocation, need specific de-allocate memory
        delete tc;

        cout << "END:__Dynamic" << endl << endl;
    }

    {
        cout << "BEGIN:____static way default-ctor calling..." << endl;

        Cat tc;  // again, try the above, static way constructing,  it should call default-c-tor

        cout << "static default ctor obj: " << tc.getName() << endl;

        cout << "END:___static" << endl << endl;

    }

    Cat cat("tiger", 6);

    cout << cat.getName() << ", age " << cat.getAge()
         << endl;

    cat.talk();

    cout << "exits classDrive()" << endl << endl;

}
