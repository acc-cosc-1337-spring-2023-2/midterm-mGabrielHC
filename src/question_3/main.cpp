#include<iostream>
#include<string>
#include "question3.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    int num = 0;

    cout<<"Hello, here you can get the fibonacci sequence of a number.: "<<"\n";
    cout<<"To continue please enter a number between 1 and 15, to exit enter a number outside of this range "<<"\n";

    do
    {
        cin>>num;
        string f_sequence = get_fib_sequence(num);

        if(num >= 1 && num <= 15)
        {
            cout<<"The fibonacci sequence of "<<num<<" is "<<f_sequence<<"\n";
        }

    } while (num >= 1 && num <= 15);
    

    return 0;
}