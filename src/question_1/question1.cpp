#include "question1.h"

#include<cmath>

using std::cout;

double get_dna_p_distance(const string& param1, const string& param2)
{
    if(param1.length() != param2.length())
    {
        cout<<"Please make sure both dna strings are equal in length";
    }

    double ratio = 0;
    for(int i = 0; i < param1.length(); i++)
    {
        if(param1[i] != param2[i])
        {
            ratio++;
        }
    }
    ratio = ratio / param1.length();
    return round(ratio * 10000.0) / 10000.0;
}