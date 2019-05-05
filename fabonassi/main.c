#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1=0,t2=1,nexttern=0,n;
    printf("enter a positive number \n");
    scanf("%d",&n);
    printf("Fibonacci series %d %d ",t1,t2);

    nexttern=t1+t2;
    while(nexttern<=n)
        {
            printf("%d",nexttern);
    t1=t2;
    t2=nexttern;
    nexttern=t1+t2;


    }
    getch();



}
