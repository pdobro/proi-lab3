/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/
#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector>

template <typename T>
class Workshop{
private:
    std::vector<T> vect;

public:
    ~Workshop(){
        for( typename std::vector<T>::iterator iter = vect.begin(); iter != vect.end(); ++iter)
            delete *iter;
        vect.clear();
        std::cout << "All data deleted.\n";
    }

    void add(T object){
        vect.push_back(object);
        std::cout<<"Object added successfully!\n";
    }

    void showData(){
        if(vect.empty()){
            std::cout << "Empty! Nothing to show.\n";
        }
        else{
            int number = 1;
            std::cout<<"List of objects:\n";
            for(typename std::vector<T>::iterator iter = vect.begin(); iter != vect.end(); ++iter)
                std::cout << number <<") " << **iter <<std::endl;
        }

    }
};

#endif
