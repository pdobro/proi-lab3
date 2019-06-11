#define BOOST_TEST_MODULE CAR_TEST
#include <boost/test/included/unit_test.hpp>

#include "Vehicle.hpp"
#include <iostream>
#include <sstream>

using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(constructor_test) {
	int year[] = {2019, 1983, 1932};

	for (int i = 0; i < 3; i++) {
		Vehicle newCar(Brand::BMW, "529", year[i]);
		BOOST_CHECK_EQUAL(newCar.getYear(), year[i]);
	}
}