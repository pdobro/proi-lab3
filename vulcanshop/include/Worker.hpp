/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/
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
