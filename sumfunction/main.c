#include <stdio.h>
#include <stdlib.h>

int Sum()
{
    int a,b ,sum=0;
    printf("Enter 2 number \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf(" the sum value is %d",sum);
   getch();
}
int main()
{

    int s;
    s=Sum();
    return(s);
}
