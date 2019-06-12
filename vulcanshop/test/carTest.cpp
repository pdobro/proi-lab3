#define BOOST_TEST_MODULE VEHICLE_TEST
#include <boost/test/included/unit_test.hpp>

#include "Vehicle.hpp"
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

BOOST_AUTO_TEST_CASE(Throw_test)
{ 
    BOOST_CHECK_THROW(Vehicle Throw("model", 20192), int);
}
