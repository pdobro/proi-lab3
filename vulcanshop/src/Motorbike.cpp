#include <iostream>
#include <string>
#include <cmath>
#include "Motorbike.hpp"

using namespace std;

Motorbike::Motorbike()
{
    this->brand = motorBrand::BMW;
    cout << "New bike added!"<<endl;
}

Motorbike::Motorbike(motorBrand b, std::string m, int y) : Vehicle::Vehicle(m, y)
{
    this-> brand = b;
    cout << "New bike added!" << endl;
}


Motorbike::~Motorbike()
{

}


void Motorbike::showData(){
    cout << "motorBrand:\t";
    switch(brand){
        case motorBrand::BMW:
            cout << "BMW";
            break;
        case motorBrand::SUZUKI:
            cout << "Suzuki";
            break;
        case motorBrand::KAWASAKI:
            cout << "Kawasaki";
            break;
    }
    Vehicle::showData();
}

