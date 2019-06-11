#ifndef MOTORBIKE_HPP
#define MOTORBIKE_HPP

#include "Vehicle.hpp"

enum class motorBrand { BMW = 0, SUZUKI, KAWASAKI};

class Motorbike : Vehicle
{
private:
   motorBrand brand;

public:
    Motorbike();
    Motorbike(motorBrand b, std::string m, int y);
    ~Motorbike();

    void showData();
};

#endif
