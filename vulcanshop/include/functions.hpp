
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

char showMenuAndGetChoice();
void exitProgram();

template <typename T> std::string salaryToString(T salary){
    std::string salaryAsText = std::to_string(salary);
    salaryAsText += "PLN";
    return salaryAsText;
}


#endif
