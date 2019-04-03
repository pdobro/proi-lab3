#ifndef REPAIR_H
#define REPAIR_H

template <typename T>
class Repair{
private:
    T date;
    std::string car;
    int income;

public:
    Repair(T d, std::string c, int i);

    void showData();
};

#endif
