#include <iostream> // Needed for std::cout 
#include "myheader.hpp" // Questions are in this file


int main()
{
    std::cout << "13 + 14  = " << sum1( 13 , 14 ) << std::endl;

    double *px = sum2( 2 , 7 );
    std::cout << "2 + 7 = " << *px << std::endl;
    delete px;

    double a3 = 11;
    double b3 = 3;
    double *py = sum3( &a3 , &b3 );
    std::cout << "11 + 3 =" << *py << std::endl;
    delete py;

    std::cout << "|9.5| = " << absolute( 9.5 ) << std::endl;
    std::cout << "|-12.5| = " << absolute( -12.5 ) << std::endl;

    std::cout << "|13 - 14| = " << absolute_difference1( 13 , 14 ) << std::endl;

    double a4 = 23;
    double b4 = 12;
    std::cout << "|23 - 12| = " << absolute_difference2( &a4 , &b4 );


    std::cout << "|23 - 12| = " << absolute_difference3( a4 , b4 ) << std::endl;

    double s = 0;
    double d = 0;

    sum_and_absolute_difference1( 50 , 48 , &s , &d );
    std::cout << "50 + 48 = " << s << ", |50 - 48| = " << d << std::endl;

    sum_and_absolute_difference2( 17 , 20 , s , d );
    std::cout << "17 + 20 = " << s << ", |17 - 20| = " << d << std::endl;

    double x = 50.0;
    double y = 100.0;
    swap1( &x , &y );
    std::cout << "swapping (50,100) => (" << x << "," << y << ")" << std::endl;

    double u = 0.0;
    double v = 8.0;
    swap2( u , v );
    std::cout << "swapping (0,8) => (" << u << "," << v << ")" << std::endl;

    double i = 3;
    double j = 7;
    swap3( i , j );
    std::cout << "swapping (3,7) => (" << i << "," << j << ") .... swap3 is very useless" << std::endl;

    double x1,x2;
    root_p(1, -5, 6, &x1, &x2);
    std::cout <<"Roots of (x^2 - 5x + 6 = 0): " << x1 << ", " << x2 << "\n";

    double x3,x4;
    root_r(1, -5, 4, x3, x4);
    std::cout <<"Roots of (x^2 - 5x + 4 = 0): " << x3 << ", " << x4 << "\n";

    double c3=-25;
    a3=1, b3=-3;
    Roots r = root(a3,b3,c3);
    std::cout <<"Roots of (x^2 - 3x -25 = 0): " << r.r1 << ", " << r.r2 << "\n";
}
