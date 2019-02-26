#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
 long long number;

    int counter=0;
    do
    {
        number=get_long_long("insert your credit card number");

    }
    while (number<0);
    long long ccdigit = number;
    while(ccdigit>0)
    {
        ccdigit = ccdigit/10;
        counter++;
    }
    if(counter!=13 && counter!=15 && counter!=16)
    {
        printf("your card number is not valid");
    }
    ccdigit = number ;
    int sum=0;

    for(int i=1; i<=counter; i++)
    {
        int dig = ccdigit%10;
        if(i%2==0)
        {
            dig=dig*2;
        }
        if(i%2!=0)
        {
            dig=dig*1;
        }
        if(dig>9)
        {
            dig=dig-9;
        }
        sum=sum+dig;
        ccdigit=ccdigit/10;
    }
    if (sum%10!=0)
    {
        printf("invalid");
    }
    else
    {
        printf("valid");
    }
    ccdigit=number;
    while (ccdigit>100)
    {
        ccdigit=ccdigit/10;
    }
    int first = ccdigit;
    if ((first==34 || first==37)&&(counter==15))
    {
        printf("from Amex ");
    }
    else if ((first>50 && first<56 && counter==16))
    {
        printf("from Mastcard");
    }
    else if ((first/10==4)&&(counter==13 || counter==16))
    {
        printf("credit card from Visa");
    }
    else
    {
        printf("credit card from another bank");
    }



}