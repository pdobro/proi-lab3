#include <iostream>
#include <string>
#include <cmath>
#include "Car.hpp"

using namespace std;

Car::Car()
{
    this->brand = Brand::AUDI;
    cout << "New car added!"<<endl;
}

Car::Car(Brand b, std::string m, int y) : Vehicle::Vehicle(m, y)
{
    this-> brand = b;
    cout << "New car added!" << endl;
}


Car::~Car()
{
    
}


void Car::showData(){
    cout << "Brand:\t";
    switch(brand){
        case Brand::AUDI:
            cout << "Audi";
            break;
        case Brand::BMW:
            cout << "BMW";
            break;
        case Brand::MERCEDES:
            cout << "Mercedes";
            break;
        case Brand::VOLKSWAGEN:
            cout << "Volkswagen";
            break;
        case Brand::TOYOTA:
            cout << "Toyota";
            break;
    }
    Vehicle::showData();
}
