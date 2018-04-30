//
// Created by JWang on 4/29/18.
//

#include <string>

using namespace std;

#ifndef TICTACTOE_CAT_H
#define TICTACTOE_CAT_H

class Cat {
private:
    string name;
    int age;

public:
    Cat();

    Cat(string, int);

    ~Cat();

    string getName();

    int getAge();

    void talk();

};

#endif //TICTACTOE_CAT_H
