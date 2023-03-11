#include "question2.h"

int get_earned_points(int sold)
{

    if(sold >= 1 && sold <= 5)
    {
        sold = sold * 1;
    }
    else if(sold >= 6 && sold <= 10)
    {
        sold = sold * 5;
    }
    else if(sold >= 11 && sold <= 15)
    {
        sold = sold * 10;
    }
    else if(sold >= 16)
    {
        sold = sold * 15;
    }
    else(sold < 1);

    return sold;
}   