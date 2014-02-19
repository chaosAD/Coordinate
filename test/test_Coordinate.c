#include "unity.h"					// unity.h must be at the top of all includes
#include "Coordinate.h"
#include "CustomType.h"
#include "mock_Multiply.h"			// Important: tell Cmock to mock all functions in here
//#include <stdio.h>

void setUp() {}
void tearDown() {}

void test_setCoordinate_should_return_proper_coordinate() {
	Coordinate actualCoor = {0, 0};
	Coordinate expectedCoor = {3, 9};
	Coordinate coor = {3343, 569};

	actualCoor = setCoordinate(3, 7);
	// TEST_ASSERT_EQUAL(3, actualCoor.x);
	// TEST_ASSERT_EQUAL(7, actualCoor.y);	
	
	TEST_ASSERT_EQUAL_Coordinate(coor, actualCoor);		
}

void test_multiplyCoordinate_should_return_properly_multiplied_coordinate() {
	Coordinate coor = {0, 0};
	
	multiply_ExpectAndReturn(2, 4, 8);
	
	coor = multiplyCoordinate(2, 14, 4);
	TEST_ASSERT_EQUAL(8, coor.x);
}