#include <stdio.h>
 void main() 
   { int a,b,c=1,d;
     printf("Enter the factorial limit : ");
     scanf("%d",&a);
     for (b=1;b<=a;b++)
     {
        c=b*c;
        d=c;
     }
     printf("%d",d);   
   }