#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

/* cstdlib replaced the origin  stdlib.h  and  time.h */
#include <cstdlib>

#include "util.h"
#include "classes.h"

#include "class/gcd/Gcd.h"

using namespace std;

// https://stackoverflow.com/questions/7625105/why-cant-i-declare-a-string-in-my-program-string-is-undeclared-identifier
// Need to have using namespace after include, but before function declarations

// https://developers.google.com/edu/c++/solutions/1-4
void checkCodeReading();

int getRandomInt(int);

void guessingNumber(int);


void checkCharWchar() {
    float fv = 73.4;
    cout << setprecision(6);
    cout << fixed << "fixed floating cout : " << fv << endl;

    cout << scientific << "scientific floating cout : " << fv << endl;


    char c1 = 55;  // casting here?
    cout << "char assigned with 55 is : " << c1 << endl;

    char c2 = '7';

    cout << "c1 == c2 : "  << (c1 == c2) << endl;

    cout << "size of char : "  << sizeof(char) << ", size of wchar_t : " << sizeof(wchar_t) << endl;
}

void checkIntegerDouble() {
    //----------------------------
    // way of input integer in c++
    //----------------------------

    cout << "input an integer: ";

    int nbr1;

    cin >> nbr1;

    cout << "your number is: " << nbr1 << endl;


    // this is interesting, set precision for cout numbers
    // cout.precision(2);
    cout << setprecision(2);


    double d1;
    double d2;

    cout << "input decimal: " << flush;
    cin >> d1;

    cout << "input decimal: " << flush;
    cin >> d2;

    cout << d1 << " divided by " << d2 << " is " << d1 / d2 << endl;


    // the max number from limits
    cout << "max int : " << INT_MAX << " min int: " << INT_MIN << endl;

    cout << "size of int : " << sizeof(INT_MAX) << ", check from INT_MIN as well : " << sizeof(INT_MIN) << endl;

    cout << "the standard way to check size of int : " << sizeof(int) << endl;
}

void checkText() {
    string name;

    cout << "enter your name: ";

    getline(cin, name);


    cout << "You've entered name: " << name << endl;


    // cin.ignore();

    print(name);

    name.append(" Smith");

    print(name);
}

void print(string name) {
    cout << "name: " << name << "\n"
         << "string.length() == " << name.length()  << "\n"
         << "string.front() == " << name.front() << "\n";
}

void checkArray() {
    int ints[3];

    cout << "uninitialized ints having undertimined old values : "  << ints[1] << endl;

    int intsInit[3] = {};

    cout << "initialized ints, event blank, has values : "  << intsInit[1] << endl;


    // the following is very diff from Java's
    int int3[3] = {1, 3, 5};

    cout << "bad idea, the memory not allocated, but C/C++ still allows it : "  << int3[5] << endl;

    // crashing
    int3[5] = -1;   // BAD


    // multi-dimensional array
    string tbl[2][3] = {
            {"cat", "dog", "bird"},
            {"wolf", "fox", "elephant"}
    };

    for (unsigned int i = 0; i < sizeof(tbl) / sizeof(tbl[0]); i++) {
        for (unsigned int j = 0; j < sizeof(tbl[0]) / sizeof(string); j++) {
            cout << "tbl[" << i << "][" << j << "] = " << tbl[i][j] << " " << flush;
        }

        cout << endl;
    }

 }

 void checkCodeReading() {
    cout << "   1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;

    for (int i = 1; i < 10; i++) {
        cout << i << "| ";

        for (int j = 1; j < 10; j++) {
            cout << j * i << "\t";
        }

        cout << endl;
    }
}

int getRandomInt(int max) {
    // avoid div/0
    if (max == 0) {
        return 0;
    }

    time_t v = time(NULL);

    // some value like : 1525312684
    // cout << "time(NULL) returned: " << v << endl;

    srand(v);

    return rand() % max  + 1;
}

int getNumberFromUser(int hint) {
    int guess;

    while (true) {

        cout << "input int (0 ~ " << hint << "): " << flush;

        cin >> guess;

        if (!cin) {
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    return guess;
}

void guessingNumber(int max) {
    int randInt = getRandomInt(max);
    int guess;

    do {
        guess = getNumberFromUser(max);

        if (guess < randInt) {
            cout << "enter a bigger number than " << guess << endl;
        } else if (guess > randInt) {
            cout << "enter a smaller number than " << guess << endl;
        } else {
            cout << "You guessed the number: " << guess << endl;
        }

    } while (randInt != guess);

}


int main() {
    cout << "Hello, Tic Tac Toe!" << endl;

    // waiting for input, but if user inputs, just ignores it, and move the the next statement (return 0)
    // cin.ignore();

    bool check = false;

    // temporary skip it.
    //    the text handling

    if (check) {
        checkText();
    }

    if (check) {
        checkIntegerDouble();
    }


    if (check) {
        checkCharWchar();
    }

    if (check) {
        checkArray();
    }


    if (check) {
        classDrive();
    }

    if (check) {
        checkCodeReading();
    }

    if (check) {
        guessingNumber(20);
    }

    check = true;

    if (check) {
        Gcd gcd13_17(13, 17);
        cout << gcd13_17.toString() <<  " is: " << gcd13_17.getGcd() << endl;

        Gcd gcd12_18(12, 18);
        cout << gcd12_18.toString() << " is: " << gcd12_18.getGcd() << endl;

        Gcd gcd3_0(3, 0);
        cout << gcd3_0.toString() << " is: " << gcd3_0.getGcd() << endl;
    }


    return 0;
}


