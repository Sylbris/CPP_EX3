#include <string>
#include <iostream>
using namespace std;

//Use map to rows.
namespace ariel {
    class NumberWithUnits {
        private :
            double amount;
            string type;

        public :
            //Constructor
            NumberWithUnits(double amount_of, string type_of){
                type = type_of;
                amount = amount_of;
            }
            //Destructor
            ~NumberWithUnits(){

            }

            // + - and *
            friend NumberWithUnits operator+(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator+=(NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator+(const NumberWithUnits& n1, double a);
            friend NumberWithUnits operator++(const NumberWithUnits& n1);
            friend NumberWithUnits operator++(const NumberWithUnits& n1, int);

            friend NumberWithUnits operator-(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator-=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator-(const NumberWithUnits& n1, double a);
            friend NumberWithUnits operator-(const NumberWithUnits& n1);
            friend NumberWithUnits operator--(const NumberWithUnits& n1);
            friend NumberWithUnits operator--(const NumberWithUnits& n1, int);

            friend NumberWithUnits operator*(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator*=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator*(double a, const NumberWithUnits& n1);
            friend NumberWithUnits operator*=(const NumberWithUnits& n1, double a);
            
            // compares.
            friend bool operator>(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator<(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator>=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator<=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator!=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator==(const NumberWithUnits& n1, const NumberWithUnits& n2);
            
            //IO 
            friend ostream& operator<<(ostream& out, const NumberWithUnits& n);
            friend istream& operator>>(istream& in, NumberWithUnits& n);

            //Other functions.
            static void read_units(ifstream& units_file);
            friend int compare(const NumberWithUnits& n1, const NumberWithUnits& n2);
    };
};