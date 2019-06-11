
#include <iostream>
#include <string>
#include "Worker.hpp"
#include "Workshop.hpp"
#include "Car.hpp"
#include "functions.hpp"
#include "Vehicle.hpp"
#include "Motorbike.hpp"
#include <vector>

using namespace std;

 
 int main(){
    int Year, numOfBrand, workerSalary;
    string Model, workerName;

    Workshop<Worker*> workers;
    Worker* newWorker;

    vector<Car> cars;

    vector<Motorbike> motors;

    cout << "Welcome to the VolcanShop" << endl;
    char userChoice = showMenuAndGetChoice();

    while(userChoice != '7'){
        switch(userChoice){
            case '1':
                cout << "Type in a name for the new worker: ";
                cin >> workerName;
                cout << "Type in the worker's salary: ";
                cin >> workerSalary;
                newWorker = new Worker(workerName, salaryToString(workerSalary));
                workers.add(newWorker);
            break;
            case '2':
            {
                cout << "Choose the car's brand: 0-Audi, 1-BMW, 2-Mercedes, 3-Volkswagen, 4-Toyota: ";
                cin >> numOfBrand;
                cout << "Type in the car's model: ";
                cin >> Model;
                cout << "Type in the car's production year: ";
                cin >> Year;
                try
                {
                Car nCar((Brand)numOfBrand, Model, Year);
                cars.push_back(nCar);
                }
                catch (string e)
                {
                    cout << "error" << e << endl;
                }


            }
            break;
            case '3':
            {
                cout << "Choose the motor brand: 0-BMW, 1-Suzuki, 2-Kawasaki: ";
                cin >> numOfBrand;
                cout << "Type in the motor model: ";
                cin >> Model;
                cout << "Type in the motor production year: ";
                cin >> Year;
                try
                {
                Motorbike nMotor((motorBrand)numOfBrand, Model, Year);
                motors.push_back(nMotor);
                }
                catch (string e)
                {
                    cout << "error" << e << endl;
                }


            }
            break;
            case '4':
                workers.showData();
            break;
            case '5':
            {
                vector<Car>::iterator it;
                for(it = cars.begin(); it != cars.end(); ++it)
                {
                    it->showData();
                }
            }
            break;

            case '6':
            {
                vector<Motorbike>::iterator it;
                for(it = motors.begin(); it != motors.end(); ++it)
                {
                    it->showData();
                }
            }
            break;
            case '7':
                exitProgram();
            break;

            default:
                cout << "There's no such option! Try again." << endl;
            break;
        }//switch

        userChoice = showMenuAndGetChoice();

    }//while

    exitProgram();

    return 0;
}

