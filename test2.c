// c program to display information of 10 students using array of structures


#include <stdio.h>

// declaring a structure

struct Student_info
{
    int age;
    int class;
    char name[20];
    char dept[10];
};
int main()
{
    // initialize the elements of student in a structure
    struct Student_info Students[2] = {{2,3,"vedhanth","CME"},{5,3,"Rishika","DCME"}};  
    
   // assigning values to the structure
   
   for (int i = 0; i < 2; i++)
   {   

       printf("%d\n",i);
       printf("%d\n",Students[i].age);

       printf("%d\n",Students[i].class);

       printf("%s\n",Students[i].name);

       printf("%s\n",Students[i].dept);
   }
}
