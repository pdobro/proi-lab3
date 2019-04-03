#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(string m, int y){
        model=m; year=y;
    }

void Car::showData(){
    cout<<"Model:\t"<<model<<endl;
    cout<<"Year:\t"<<year<<endl;
}
