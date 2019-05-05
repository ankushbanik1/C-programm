#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row ,i,j;
    printf("Enter the number of row......\n");
    scanf("%d",&row);

    for (i=1;i<=row;i++){

    for(j=1;j<=i;j++){

    printf(" *");


    }
    printf("\n");
       }
  getch();

}
