#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter a  year i will show you its a leap year or not\n");
    scanf("%d",&month);
    if (month%400==0)
    {
        printf("Its a leap year");

    }else if (month%100==0)
    {
        printf("Its a leap year");

    } else if (month%4==0)
    {
        printf("Its a leap year");

    }
    else
          printf("Its not a leap year Thank you");

getch();
}
