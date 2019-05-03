#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

int showMenu();
void exitProgram();

template <typename T> std::string salaryToString(T salary){
    //std::ostringstream os;
    //os<<salary;
    //return os.str() + "PLN";
    std::string salaryAsText = std::to_string(salary);
    salaryAsText += "PLN";
    return salaryAsText;
}


#endif
