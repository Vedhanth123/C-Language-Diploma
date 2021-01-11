#include <stdio.h>
  void main()
   { int a,b,c=1;
     printf("Enter any value : ");
     scanf("%d",&a);
     for (b=1;b<=a;b++)
     {     
         printf("%d\n",c);
         if(b==a/2)
         break;
     }
   }     
