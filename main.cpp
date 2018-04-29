#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello, Tic Tac Toe!" << endl;

    // waiting for input, but if user inputs, just ignores it, and move the the next statement (return 0)
    // cin.ignore();

    string name;

    cout << "enter your name: ";

    getline(cin, name);


    cout << "You've entered name: " << name << endl;


    // cin.ignore();



    return 0;
}