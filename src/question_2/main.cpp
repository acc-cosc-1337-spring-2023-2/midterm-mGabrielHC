#include<iostream>
#include "question2.h"

using std::cout;
using std::cin;

int main()
{
    int w_sold = 0;

    do
    {
        cout<<"Enter the amount of widgets sold: "<<"\n";
        cout<<"Enter 0 to opt out: "<<"\n";
        cin>>w_sold;

        int points = get_earned_points(w_sold);

        cout<<"Points Earned: "<<points<<"\n";
    
    } while (w_sold >= 1);
    

    return 0;
}