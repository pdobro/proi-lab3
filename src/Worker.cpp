
#include <iostream>
#include "Worker.hpp"

using namespace std;

Worker::Worker(string n, string s){
    this->name = n;
    this->salary = s;
    cout << "New worker employed!" <<endl;
}

Worker::~Worker(){
    cout << name <<" was given a sack." <<endl;
}

void Worker::showData(){
    cout<<"Name:\t"<<name<<endl;
    cout<<"Salary:\t"<<salary<<endl;
}

ostream& operator<<(ostream& os, Worker& w){
    os << w.name << "\tsalary: " << w.salary;
    return os;
}
