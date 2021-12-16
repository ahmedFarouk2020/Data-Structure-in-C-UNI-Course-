#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"

// Your code starts from here

namespace dna
{

    char complementaryBase( char base )
        {
            switch (base)
            {
            case 'A':
                return 'T';
                break;
            case 'T' :
                return 'A';
                break;
            case 'G' : 
                return 'C';
                break;
            case 'C' : 
                return 'G';
                break;
            default:
                return '0';
                break;
            }
        }
    char * complementarySequence( char *base, int size )
    {
        // Your logic here
        char* c_1 = new char[size];
        int k =size-1;
        for(int i =0 ;i<size ;i++){
            c_1[i]=complementaryBase(base[k]);
            k=k-1;
        }
        return c_1;
    }
    char *analyzeDNA( char *base, int size, int &countA, int &countC, int &countG, int &countT )
    {
        // Your logic here (5 lines).
        countA = countCharacter(&base[0],size,'A');
        countC = countCharacter(&base[0],size,'C');
        countG = countCharacter(&base[0],size,'G');
        countT = countCharacter(&base[0],size,'T');
        return complementarySequence(base,size);
    }
}

// Your code ends here

#endif // DNA_HPP
