#ifndef VEHICLE_HPP
#define VEHICLE_HPP

class Vehicle
{
    private:
    std::string model;
    int year;

    public:
    Vehicle();
    Vehicle(std::string m, int y);
    ~Vehicle();
    
    void getYear();
    virtual void showData();
};

#endif