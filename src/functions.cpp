
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "functions.hpp"

using namespace std;

char showMenuAndGetChoice(){

    char userChoice;
    this_thread::sleep_for(chrono::milliseconds(350));
    cout << "\n# # # # M E N U # # # # #"<<endl; this_thread::sleep_for(chrono::milliseconds(350));
    cout << "1. Add new worker"<<endl; this_thread::sleep_for(chrono::milliseconds(300));
    cout << "2. Add new car"<<endl; this_thread::sleep_for(chrono::milliseconds(250));
    cout << "3. Add new motor"<<endl; this_thread::sleep_for(chrono::milliseconds(200));
    cout << "4. Show list of workers"<<endl; this_thread::sleep_for(chrono::milliseconds(150));
    cout << "5. Show list of cars"<<endl; this_thread::sleep_for(chrono::milliseconds(100));
    cout << "6. Show list of motors"<<endl; this_thread::sleep_for(chrono::milliseconds(50));
    cout << "7. Exit"<<endl; this_thread::sleep_for(chrono::milliseconds(50));
    cout << "Waiting for your command: ";
    cin >> userChoice;

    return userChoice;
}

void exitProgram(){
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Thank You for using the VulcanShop!"<<endl; this_thread::sleep_for(chrono::milliseconds(500));
    cout << "See You next time..."<<endl; this_thread::sleep_for(chrono::milliseconds(500));
    exit(0);
}
