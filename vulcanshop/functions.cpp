#include <iostream>
#include "functions.hpp"
using namespace std;

int showMenu(){

    cout << "# # # # M E N U # # # # #" <<endl;
    cout << "1. Add new worker" <<endl;
    cout << "2. Add new car" <<endl;
    cout << "3. Show list of workers" <<endl;
    cout << "4. Show list of cars" <<endl;
    cout << "5. Exit" <<endl;
    cout << "Waiting for your command: ";
    cin >> userChoice;

    return userChoice;
}
