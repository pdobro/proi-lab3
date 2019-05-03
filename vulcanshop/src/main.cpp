#include <iostream>
#include <string>
#include "Worker.hpp"
#include "Workshop.hpp"
#include "Car.hpp"
#include "functions.hpp"

using namespace std;

int main(){
    int carYear, numOfBrand, workerSalary;
    string carModel, workerName;


    Workshop<Worker*> workers;
    Worker* newWorker;

    Workshop<Car*> cars;
    Car* newCar;

    cout << "Welcome to the VolcanShop" << endl;
    int userChoice = showMenu();

    while(userChoice != 5){
        switch(userChoice){
            case 1:
                cout << "Type in a name for the new worker: ";
                cin >> workerName;
                cout << "Type in the worker's salary: ";
                cin >> workerSalary;
                newWorker = new Worker(workerName, salaryToString(workerSalary));
                workers.add(newWorker);
            break;
            case 2:
                cout << "Choose the car's brand: 0-Audi, 1-BMW, 2-Mercedes, 3-Volkswagen, 4-Toyota: ";
                cin >> numOfBrand;
                cout << "Type in the car's model: ";
                cin >> carModel;
                cout << "Type in the car's production year: ";
                cin >> carYear;
                newCar = new Car((CarBrand)numOfBrand, carModel, carYear);
                cars.add(newCar);
            break;
            case 3:
                workers.showData();
            break;
            case 4:
                cars.showData();
            break;
            case 5:
                exitProgram();
            break;

            default:
                cout << "There's no such option! Try again." << endl;
            break;
        }//switch

        userChoice = showMenu();

    }//while

    exitProgram();

    return 0;
}
