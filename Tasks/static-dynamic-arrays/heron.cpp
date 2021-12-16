#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof
#include <string>
// We need main function here!
int main ( int argc , char **argv)
{ double a =0 , b =0 , c =0;
    a = std:: atof ( argv [1]);
    b = std:: atof ( argv [2]);
    c = std:: atof ( argv [3]);
    std:: cout << " The area of the triangle using heron theorem =" << Heron ( a , b , c ) << " \n ";
    return  0;
}
