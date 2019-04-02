#include <iostream>
#include "Worker.h"

using namespace std;

void Worker::showData(){
    cout<<"ID:\t"<<id<<endl;
    cout<<"Name:\t"<<name<<endl;
    cout<<"Salary:\t"<<salary<<endl;
}

void Worker::changeSalary(){
    int change;
    cout<<"Change salary: "<<endl;
    cin>>change;
    salary=change;
}
