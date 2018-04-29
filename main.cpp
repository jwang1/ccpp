#include <iostream>
#include <string>

using namespace std;


void print(string name) {
    cout << "name: " << name << "\n"
         << "string.length() == " << name.length()  << "\n"
         << "string.front() == " << name.front() << "\n";
}

int main() {
    cout << "Hello, Tic Tac Toe!" << endl;

    // waiting for input, but if user inputs, just ignores it, and move the the next statement (return 0)
    // cin.ignore();

    string name;

    cout << "enter your name: ";

    getline(cin, name);


    cout << "You've entered name: " << name << endl;


    // cin.ignore();

    print(name);

    name.append(" Smith");

    print(name);


    //----------------------------
    // way of input integer in c++
    //----------------------------

    cout << "input an integer: ";

    int nbr1;

    cin >> nbr1;

    cout << "your number is: " << nbr1 << endl;


    // this is interesting
    cout.precision(2);
    double d1;
    double d2;

    cout << "input decimal: " << flush;
    cin >> d1;

    cout << "input decimal: " << flush;
    cin >> d2;

    cout << d1 << " divided by " << d2 << " is " << d1 / d2 << endl;


    return 0;
}
