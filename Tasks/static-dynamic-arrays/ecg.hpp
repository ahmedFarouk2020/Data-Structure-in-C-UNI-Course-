#ifndef ECG_HPP
#define ECG_HPP

#include "arrays.hpp"

// Your code starts from here

struct Statistics
{
    double average;
    double variance;
    double max;
    double min;
};
Statistics analyzeECG( double *base , int arraySize)
{
 Statistics ECG_data;
 ECG_data.average = meanArray( base, arraySize );
 ECG_data.variance = varianceArray(base , arraySize );
 ECG_data.max = maxArray( base , arraySize);
 ECG_data.min = minArray(base , arraySize);
 return ECG_data;
}

// Your code ends here

#endif // ECG_HPP
