#include <iostream>
#include "Repair.h"

using namespace std;

template <typename T>
Repair<T>::Repair(T d, string c, int i){
        date=d; car=c; income=i;
    }

template <typename T>
void Repair<T>::showData(){
    cout<<"Date:\t"<<date<<endl;
    cout<<"Car:\t"<<car<<endl;
    cout<<"Income:\t"<<income<<endl;
}

template class Repair<int>;
template class Repair<string>;
