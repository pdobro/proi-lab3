
#ifndef WORKER_HPP
#define WORKER_HPP

class Worker{
private:
    std::string name;
    std::string salary;

public:
    Worker(std::string n, std::string s);
    ~Worker();

    void showData();
    friend std::ostream& operator<<(std::ostream& os, Worker& w);
};

#endif
