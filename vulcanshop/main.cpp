#include <iostream>
#include <vector>
#include "Worker.h"
#include "Repair.h"

using namespace std;

int main(){
    cout << "Welcome to the VolcanShop" << endl;

    vector<Worker> w;
    for(auto i = w.begin(); i!=w.end(); ++i){
        i.showData();
    }

    return 0;
}
