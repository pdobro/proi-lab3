#ifndef CAR_H
#define CAR_H

class Car{
private:
    std::string model;
    int year;

public:
    Car(std::string m, int y);

    void showData();
};

#endif
