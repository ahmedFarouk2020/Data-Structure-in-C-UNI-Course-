#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"

// Your code starts from here

void printAll( double *base , int arraySize )
{
    int i;
    for ( i =0 ; i < arraySize ; i++)
    { std::cout << base[i] ;}
}



double maxArray( double *base, int arraySize )
{
    int i;
     double max = base[0] ;
    for ( i =0 ; i < arraySize ; i++)
    {
        if ( max < base[i] )
        { max = base[i];}
    }     
     return max ;
}

double minArray( double *base, int arraySize )
{
    double min = base[0];
    int i;
    for ( i =0 ; i < arraySize ; i++)
    { if ( min > base[i] )
        { min = base[i];
        }

}
    return min ;
}

double meanArray( double *base , int arraySize )
{
    double sum = 0;
    for(int i=0;i<arraySize;i++)
    {
        sum+=base[i];
     }
    return sum/arraySize;

}
double varianceArray ( double *base , int arraysize)
{
    double a = meanArray( base , arraysize );
    double sum =0 , diff =0;
    int i;
    for ( i =0 ; i < arraysize ; i++)
    { diff = a - base [i];
        sum = sum + ( diff * diff );}
    return  sum / arraysize ;
}

int countCharacter( char *array , int size , char query )
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == query)
        {
            count++;
        }
        
    }
    return count;
} 


// Your code ends here

#endif // ARRAYS_HPP
