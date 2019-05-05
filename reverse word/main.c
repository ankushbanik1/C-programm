#include <stdio.h>
#include <stdlib.h>

void reverse(char str[])
{
   int length =strlen(str);
   int i;
   for(i =length-1;i>=0;i--)

   if(str[i]=='')
    {
    printf('\0');

    printf("%s",&(str[i]+1));
   }

}
printf("%s",str);
int main()
{
   char str[]="I AM A GEEK";
   reverse(str);
   return 0;
}
