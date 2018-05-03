//
// Created by JWang on 5/2/18.
//

#include <iostream>
#include <sstream>

using namespace std;

#ifndef TICTACTOE_GCD_H
#define TICTACTOE_GCD_H

class Gcd {
public:
    Gcd(int a, int b);
    ~Gcd();

    string toString();

    int getGcd();

private:
    int a;
    int b;
};

#endif //TICTACTOE_GCD_H
