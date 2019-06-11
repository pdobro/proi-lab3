#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"

enum class Brand { AUDI = 0, BMW, MERCEDES, VOLKSWAGEN, TOYOTA};

class Car : public Vehicle
{
private:
    Brand brand;

public:
    Car();
    Car(Brand b, std::string m, int y);
    ~Car();

    void showData();
};

#endif
