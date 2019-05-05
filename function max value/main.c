#include <stdio.h>
#include <stdlib.h>

int main()
{int s;
s=max();
return (s);

}
 int max(){
int x,y,z ;


     printf("Enter 3 values you want to see in order \n");
scanf("%d%d%d",&x,&y,&z);
if(x>y&& x>z)
    {
    printf("%d is max ",x);

    }
    else if(y>x&&y>z)
    {
        printf("%d is max",y);
    }
        else if(x==y&&y==z)
        {
            printf("Error!\n Enter  3 different values ");
        }
        else{
            printf("%d  is max ",z);
        }
         getch();

 }
