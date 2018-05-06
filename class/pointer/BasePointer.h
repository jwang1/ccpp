//
// Created by JWang on 5/6/18.
//

#include <iostream>

using namespace std;


#ifndef TICTACTOE_POINTER_H
#define TICTACTOE_POINTER_H

class BasePointer {
public:
    BasePointer();
    ~BasePointer();

    void increase(void * data, int psize);
};

#endif //TICTACTOE_POINTER_H
