#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake( const std::vector<Tagliatelle>& makarony){

    double M = 0.;
    int i = 1;

    for (auto it = makarony.crbegin(); it != makarony.crend(); ++it){
    
        M += it->ileMaki(i);
        i++;

    }


    if (M > 100)
    {
        throw 0;
    }
    else if(M>50)
    {
        throw 1.1;
    }
    return M;



}
