#include <stdio.h>
#include <stdlib.h>


struct employee{
 char name[100];
 int id;
 int salary;



};

int main()

{
    struct employee e1;

    printf("Hello sir, Enter employee data \n");
    printf("Hello sir, Enter employee name \n");
    scanf("%s",&e1.name);
    printf("Hello sir, Enter employee Id no.\n");
    scanf("%d",&e1.id);
    printf("Hello sir, Enter employee salary \n");
    scanf("%d",&e1.salary);

    printf("sir,  your employee name %s \n",e1.name);
    printf(" sir, your employee id %d \n",e1.id);
    printf(" sir, your  employee salary %d\n",e1.salary);
getch();
}
