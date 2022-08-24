#include <stdio.h>  //note:
struct employee     //tag name (it gives the information of the datatype name)  |  the members of the structure are always accessed by the dot operator (.)
                    //                                                                                           syntax
{                   //                                                          |  structure_variable.member_of_the_structure ( for outer structure)
    char name[10];  //                                                             structure_variable.inner_structure_variable.member_of_the_inner_structure ( for inner structure )
    int employeeid; // members of the datatype
    struct dob      
    {
        int date, month, year; // member of the structure
    } programmer;              // structure variable ( inner variable )
};
struct employee e1; // structure variable ( outer variable )
void main()
{
    printf("Enter name and employeeid:\n");
    scanf("%s%d", e1.name, &e1.employeeid);
    printf("Enter the date of birth :\n");                                           // assigning the elements in the members of the structure
    scanf("%d%d%d", &e1.programmer.date, &e1.programmer.month, &e1.programmer.year); // assigning the elements in the members of the inner structure
    printf("The details of the programmer are :\n");
    printf("%s  %d  %s\n", e1.name, e1.employeeid);
    printf("%d  %d  %d", e1.programmer.date, e1.programmer.month, e1.programmer.year); // printing the elements in the structure
    printf("%u", &e1.employeeid);
}
