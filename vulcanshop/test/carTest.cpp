#define BOOST_TEST_MODULE PROI_proj_4_test
#include <boost/test/included/unit_test.hpp>

#include "Vehicle.hpp"
#include <sstream>


using namespace boost::unit_test;

//g++ -I ../include user_test.cpp -lboost_unit_test_framework

//TData* check = new TData;
BOOST_AUTO_TEST_CASE(User_Constructor_test)
{

    std::string model[] = {"a4", "Golf", "320"};
    int year [] = {2012, 1987, 2002};

    for(int i=0; i<3; i++)
    {
	    Vehicle newVehicle(model[i], year[i]);
	    BOOST_CHECK_EQUAL(newVehicle.getYear(), year[i]);
	}
    
    BOOST_CHECK_THROW(Vehicle Throw("abc", 20192), int);
}
