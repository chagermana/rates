#include <stdio.h>
#include <math.h>

int main()
{
    int gross_pay,hours;
    int rate=56;
    printf("Enter the number of hours\n");
    scanf("%i",&hours);
    if(hours>40)
    gross_pay=rate*40+1.5*rate*(hours-40);
    else
    gross_pay= rate*hours;
    
    printf("gross_pay: ksh %i\n",gross_pay);

    return 0;
}