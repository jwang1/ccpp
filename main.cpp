#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// https://stackoverflow.com/questions/7625105/why-cant-i-declare-a-string-in-my-program-string-is-undeclared-identifier
// Need to have using namespace after include, but before function declarations

void checkText();
void print(string);


int main() {
    cout << "Hello, Tic Tac Toe!" << endl;

    // waiting for input, but if user inputs, just ignores it, and move the the next statement (return 0)
    // cin.ignore();

    // temporary skip it.
    //    the text handling
    // checkText();


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


    return 0;
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

