//
// Created by JWang on 5/2/18.
//

#ifndef TICTACTOE_GCD_H
#define TICTACTOE_GCD_H

#include <iostream>
#include <sstream>

class Gcd {
public:
    Gcd(int a, int b);
    ~Gcd();

    std::string toString();

    int getGcd();

private:
    int a;
    int b;
};

#endif //TICTACTOE_GCD_H
