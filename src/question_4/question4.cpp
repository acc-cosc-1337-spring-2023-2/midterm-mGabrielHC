#include<iostream>
#include "question4.h"

int get_fib_number(int num)
{
    int fib_num = 0;
    int num1 = 0;
    int num2 = 1;


    for(int i = 0; i < num; i++)
    {
        fib_num = num1 + num2;
        num1 = num2;
        num2 = fib_num;
    }

    return num1;
}