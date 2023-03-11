#include "question3.h"


string get_fib_sequence(int num)
{
    string sequence = " ";

    int num1 = 0;
    int num2 = 1;
    int num3 = 1;

    if(num >= 2)
    {
        sequence += "0 ";
    }

    for(int i = 0; i < num; i++)
    {
        sequence += std::to_string(num3) + " ";

        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    return sequence;
}

