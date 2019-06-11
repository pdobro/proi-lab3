
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
    /*
    try
    {
            this -> year = y;

    }
    catch (string e)
    {
        cout << e << endl;
    }
    */
}

Vehicle::~Vehicle()
{}

void Vehicle::showData()
{
    cout <<"\nModel:\t"<<model<<endl;
    cout <<"Year:\t"<<year<<endl;
}

