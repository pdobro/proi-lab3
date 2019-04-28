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
    ~Car();

    void showData();
    friend std::ostream& operator<<(std::ostream& os, Car& c);
};

#endif
