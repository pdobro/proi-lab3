/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/
#ifndef CAR_HPP
#define CAR_HPP

enum class CarBrand { AUDI = 0, BMW, MERCEDES, VOLKSWAGEN, TOYOTA};

class Car{
private:
    CarBrand brand;
    std::string model;
    int year;

public:
    Car(CarBrand b, std::string m, int y);
    Car(CarBrand b, std::string m);
    ~Car();

    void showData();
    friend std::ostream& operator<<(std::ostream& os, Car& c);
};

#endif
