#include <stdio.h>
#include <stdlib.h>
#include<string.h>



struct Student{


    char name[100];
    int age;

};

int main()
{
        struct Student s1;

   s1.age=18;
   strcpy(s1.name,"Ankush");

    printf("the name of the student %s\n",s1.name);
    printf("the age of the student %d",s1.age);

    getch();


}

