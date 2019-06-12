
#include <iostream>
#include <string>
#include <cmath>
#include "Vehicle.hpp"
 
#define CURR_YEAR 2019
#define BEGI_YEAR 1900

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
    if ( (y < BEGI_YEAR) || (y > CURR_YEAR) )
    {
        string exception = "wrong year!";
        throw exception;
    }
  
}

Vehicle::~Vehicle()
{}

int Vehicle::getYear()
{
    return year;
}

void Vehicle::showData()
{
    cout <<"\nModel:\t"<<model<<endl;
    cout <<"Year:\t"<<year<<endl;
}

