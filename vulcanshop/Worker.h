#ifndef WORKER_H
#define WORKER_H

class Worker{
private:
    int id, salary;
    string name;

public:
    Worker(int i, int s, string n){
        id=i; salary=s; name=n;
    }

    void showData();
    void changeSalary();
};

#endif
