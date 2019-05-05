#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a Number I will check its a negative or positive  \n");
   scanf("%d",&number);
    if(number>=0.0)
        printf("the number is Positive");
    if(number<0.0)
        printf("The number is Negative");
    getch();
}
