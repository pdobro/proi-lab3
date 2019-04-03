#ifndef WORKER_H
#define WORKER_H

class Worker{
private:
    int id, salary;
    std::string name;

public:
    Worker(int i, int s, std::string n);

    void showData();
    void changeSalary();
};

#endif
