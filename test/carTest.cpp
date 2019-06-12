#define BOOST_TEST_MODULE VEHICLE_TEST
#include <boost/test/included/unit_test.hpp>

#include "Vehicle.hpp"
#include "Car.hpp"
#include <sstream>


using namespace boost::unit_test;

//g++ -I ../include carTest.cpp -lboost_unit_test_framework

BOOST_AUTO_TEST_CASE(Constructor_test)
{

    std::string model = "a4";
    int year = 2002;

	Vehicle newVehicle(model, year);
	BOOST_CHECK_EQUAL(newVehicle.getYear(), year);
}



BOOST_AUTO_TEST_CASE(Virtual_function_test)
{
    std::string model = "Gol";
    int year = 2000;

	Vehicle *V = new Car(Brand::BMW, model ,year);
	
	std::ostringstream expected_output;
 	auto cout_buff = std::cout.rdbuf();
	std::cout.rdbuf(expected_output.rdbuf());
    
    std::cout << "Brand:\t"<< "BMW";
    std::cout << "\nModel:\t" << model << std::endl;
    std::cout << "Year:\t" << year << std::endl;
    std::cout.rdbuf(cout_buff);
    
    std::ostringstream class_output;
 	auto co_buff = std::cout.rdbuf();
	std::cout.rdbuf(class_output.rdbuf());
    V->showData();
    std::cout.rdbuf(co_buff);
    

BOOST_CHECK_EQUAL(class_output.str(), expected_output.str());
}

BOOST_AUTO_TEST_CASE(Throw_test)
{ 
	
    BOOST_CHECK_THROW(Vehicle Throw("model", 20201), std::string);
}
