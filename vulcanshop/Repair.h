#ifndef REPAIR_H
#define REPAIR_H

template <typename T>
class Repair{
private:
    T date;
    string car;
    int income;

public:
    Repair(T d, string c, int i){
        date=d; car=c; income=i;
    }

    void showData();
};

#endif
