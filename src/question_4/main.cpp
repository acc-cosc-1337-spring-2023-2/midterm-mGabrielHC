#include<iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    int num = 0;

    cout<<"Hello, here you can get the fibonacci number of what you enter: "<<"\n";
    cout<<"To continue please enter a number between 1 and 15, to exit enter a number outside of this range "<<"\n";

    do
    {
        cin>>num;
        int f_number = get_fib_number(num);

        if(num >= 1 && num <= 15)
        {
            cout<<"The fibonacci number of "<<num<<" is "<<f_number<<"\n";
        }

    } while (num >= 1 && num <= 15);
    
    return 0;
}