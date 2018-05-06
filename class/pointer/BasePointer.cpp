//
// Created by JWang on 5/6/18.
//

#include <sstream>

#include "BasePointer.h"


void BasePointer::increase(void *data, int psize) {
    if (psize == sizeof(char)) {
        char *ptrChar = (char *) data;
        ++(*ptrChar);
    } else if (psize == sizeof(short)) {
        short *ptrShort = (short *) data;
        ++(*ptrShort);
    } else if (psize == sizeof(int)) {
        int *ptrInt = (int *) data;
        ++(*ptrInt);
    } else {
        stringstream ss;

        ss << "not implemented for psize of " << psize;

        throw ss.str();
    }
}

BasePointer::BasePointer() {
    cout << "BasePointer c-tor called" << endl;
}

BasePointer::~BasePointer() {
    cout << "~BasePointer d-tor called" << endl;
}
