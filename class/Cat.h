//
// Created by JWang on 4/29/18.
//

#ifndef TICTACTOE_CAT_H
#define TICTACTOE_CAT_H

#include <string>

class Cat {
private:
    std::string name;
    int age;

public:
    Cat();

    Cat(std::string, int);

    ~Cat();

    std::string getName();

    int getAge();

    void talk();

};

#endif //TICTACTOE_CAT_H
