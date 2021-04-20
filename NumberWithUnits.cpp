#include <string>
#include <iostream>
#include "NumberWithUnits.hpp"
using namespace std;

//Use map to rows.
namespace ariel {
   


            // + - and *
            NumberWithUnits operator+(const NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator+=(NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator+(const NumberWithUnits& n1, double a){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator++(const NumberWithUnits& n1){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator++(const NumberWithUnits& n1, int){return NumberWithUnits{5, "km"};}

            NumberWithUnits operator-(const NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator-=(const NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator-(const NumberWithUnits& n1, double a){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator-(const NumberWithUnits& n1){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator--(const NumberWithUnits& n1){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator--(const NumberWithUnits& n1, int){return NumberWithUnits{5, "km"};}

            NumberWithUnits operator*(const NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator*=(const NumberWithUnits& n1, const NumberWithUnits& n2){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator*(double a, const NumberWithUnits& n1){return NumberWithUnits{5, "km"};}
            NumberWithUnits operator*=(const NumberWithUnits& n1, double a){return NumberWithUnits{5, "km"};}
            
            // compares.
            bool operator>(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            bool operator<(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            bool operator>=(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            bool operator<=(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            bool operator!=(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            bool operator==(const NumberWithUnits& n1, const NumberWithUnits& n2){return true;}
            
            //IO 
            ostream& operator<<(ostream& out, const NumberWithUnits& n){return out;}
            istream& operator>>(istream& in, NumberWithUnits& n){return in;}

            //Other functions.
            void NumberWithUnits::read_units(ifstream& units_file){}
            int compare(const NumberWithUnits& n1, const NumberWithUnits& n2){return 0;}
    };