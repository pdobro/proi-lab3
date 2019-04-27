#include <iostream>
#include <string>
#include "Worker.hpp"
#include "Workshop.hpp"
#include "Car.hpp"
#include "functions.hpp"

using namespace std;

int main(){
    cout << "Welcome to the VolcanShop\n" << endl;
    int userChoice = showMenu();

    int carYear, numOfBrand, workerSalary;
    string carModel, workerName;
    Workshop<Worker*> workers;
    Worker* newWorker;
    Workshop<Car*> cars;
    Car* newCar;

    switch(userChoice){
        case 1:
            cout << "Type in a name for the new worker: ";
            cin >> workerName;
            cout << "Type in the worker's salary: ";
            cin >> workerSalary;
            newWorker = new Worker(workerName, workerSalary);
            workers.add(newWorker);
        break;
        case 2:
            cout << "Choose car's brand: 0-Audi, 1-BMW, 2-Mercedes, 3-Volkswagen, 4-Toyota: ";
            cin >> numOfBrand;
            cout << "Type in the car's model: ";
            cin >> carModel;
            cout << "Type in the car's production year: ";
            cin >> carYear;
            newCar = new Car(numOfBrand, carModel, carYear);
            cars.add(newCar);
        break;
        case: 3:



    }

    return 0;
}
