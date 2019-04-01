#include <iostream>
#include "Worker.h"

using namespace std;

//Worker(int i, int s, string n); (Konstruktor tu, czy w .h ???)

void Worker::showData(){
    cout<<"ID:\t"<<id<<endl;
    cout<<"Name:\t"<<name<<endl;
    cout<<"Salary:\t"<<salary<<endl;
}

void changeSalary(){
    int change;
    cout<<"Change salary: "<<endl;
    cin>>change;
    salary=change;
}
