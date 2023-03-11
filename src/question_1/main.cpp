#include<iostream>
#include "question1.h"

using std::cout;

int main()
{
    double p_distance = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

    cout<<"The dna p distance of the strings are: "<<p_distance<<"\n";

    return 0;
}