
#include <iostream>
#include <string>
#include <cmath>
#include "Vehicle.hpp"
 
 using namespace std;

Vehicle::Vehicle()
{
    this->model = "model";
    this->year = 2019;
}

Vehicle::Vehicle(string m , int y)
{
    this->model = m;
    this->year = y;
    if ( (y < 1900) || (y > 2019) )
    {
        string exception = "wrong year!";
        throw exception;
    }
  
}

Vehicle::~Vehicle()
{}

void Vehicle::getYear()
{
    cout<<year;
}

void Vehicle::showData()
{
    cout <<"\nModel:\t"<<model<<endl;
    cout <<"Year:\t"<<year<<endl;
}

