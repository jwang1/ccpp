//
// Created by JWang on 5/2/18.
//

/**
 * read some information from  https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm
 *          thought about the  swapping, and returning  (the impl)
 */

#include "Gcd.h"

using namespace std;


Gcd::Gcd(int a1, int b1) {
    a = a1;
    b = b1;
}

Gcd::~Gcd() {
    cout << "d-tor called for a: " << a << ", b: " << b << endl;
}

int Gcd::getGcd() {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        // make sure a1 is the larger
        int a1 = a > b ? a : b;
        int b1 = a > b ? b : a;
        int remainder = a1 % b1;

        while (remainder != 0) {
            a1 = b1;
            b1 = remainder;
            remainder = a1 % b1;
        }

        return b1;
    }
}

string Gcd::toString() {
    stringstream ss;
    ss << "gcd of " << a << ", " << b << " ";
    return ss.str();
}
