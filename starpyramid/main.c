
   #include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,rows;

printf("enter the number of row you want your pyramid");
scanf("%d",&rows);

for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print star */
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    return 0;
getch();
}



