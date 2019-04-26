#ifndef WORKER_HPP
#define WORKER_HPP

class Worker{
private:
    std::string name;
    int salary;

public:
    Worker(std::string n, int s);
    ~Worker();

    void showData();
    friend std::ostream& operator<<(std::ostream& os, Worker& w);
};

#endif
