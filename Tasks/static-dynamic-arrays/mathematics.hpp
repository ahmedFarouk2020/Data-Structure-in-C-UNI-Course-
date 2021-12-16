#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

double calculation( double a , double b , char operation )
{  
    switch (operation)
    {
    case '+':
        return a + b;
        break;
    case '-': 
        return a - b ;
        break;
    case '/' : 
        return a/b;
        break;
    case 'x' : 
        return a*b;
        break;
    default:
        return 0;
        break;
    }

}

double Heron ( double a , double b , double c)
{ double s =0 ,A =0;
    s = (a + b +c)/2;
    A = std::sqrt ( s*(s-a)*(s-b)*(s-c));
    return  A;
}
#endif // MATHEMATICS_HPP
