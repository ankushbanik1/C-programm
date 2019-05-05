#include <stdio.h>
#include <stdlib.h>
int cube(){
int cubee=0, x;
printf("enter the number you want to cube ");
scanf("%d",&x);
cubee=x*x*x;
printf("the cube of %d is %d",x,cubee);
getch();

}

int main()
{ int c;
c=cube();
return (c);

}
