/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;




TEST_CASE("Check addition, subtraction") {

    ifstream units_file{"units.txt"};
    NumberWithUnits :: read_units(units_file);
    NumberWithUnits n1{5, "km"};
    NumberWithUnits n2{10, "km"};
    NumberWithUnits n3{15, "km"};

    CHECK_EQ(n1+n2, n3); //Check addition between 2 numbers.
    CHECK_EQ(n2+n1, n3); //Check addition between 2 numbers.
    CHECK_EQ(n1+10, n3); //Check unari addition.
    CHECK_EQ(n1, n3-10); //Check unaric subtration.
    CHECK_EQ(n1, n1-0); //Check unaric subtration.
    CHECK_EQ(n1+0, NumberWithUnits {5, "km"}); //Check Equality.
    CHECK_EQ(n1++, NumberWithUnits {6, "km"}); //Check++
    CHECK_EQ(n1--, NumberWithUnits {5, "km"}); //Check--
    CHECK_EQ(n1-n2, NumberWithUnits {-5, "km"}); //Check minus

    CHECK_EQ((n1+=n2), NumberWithUnits {15, "km"});
    
}
TEST_CASE("Check mult") {

    ifstream units_file{"units.txt"};
    NumberWithUnits :: read_units(units_file);
    NumberWithUnits n1{5, "km"};
    NumberWithUnits n2{10, "km"};   

    CHECK_EQ(n1*n2, NumberWithUnits {50, "km"}); //Check addition between 2 numbers.
    CHECK_EQ(1*n1, n1); //Check addition between 2 numbers.
    CHECK_EQ(0*n1, NumberWithUnits {0, "km"}); //Check addition between 2 numbers.
    CHECK_EQ(-1*n1, -n1); //Check addition between 2 numbers.

}

TEST_CASE("Check comparators") {

    ifstream units_file{"units.txt"};
    NumberWithUnits :: read_units(units_file);
    NumberWithUnits n1{5, "km"};
    NumberWithUnits n2{10, "km"};   

    CHECK_LT(n1, n2);
    CHECK_GT(n2, n1);
    CHECK_NE(n2,n1);
    CHECK_NE(n1,n2);
    
}
TEST_CASE("Errors") {

    ifstream units_file{"units.txt"};
    NumberWithUnits :: read_units(units_file);
    NumberWithUnits n1{5, "km"};
    NumberWithUnits n2{10, "hour"};   

    CHECK_THROWS(n1+n2); //add different units
    CHECK_THROWS(n2+n1); //add different units

    
}





