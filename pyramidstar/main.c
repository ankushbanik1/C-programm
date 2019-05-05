#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,row;

printf("enter the number of row you want your pyramid");
scanf("%d",&row);

for(a=1;a<=row;a++)
{

    for(b=a;b<a;b++)
    {
        printf( " ");

    }
    for(b=1;b<=(2*a-1));b++)
    {
        printf("*");
    }
    printf("\n");

}
getch();
}

