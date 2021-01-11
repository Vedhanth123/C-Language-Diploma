#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char str[100];
    int n;
    fp = fopen("google.txt", "r+"); // google file contains only hello
    fgets(str,50,fp); // data in the file is assigned to the str
    printf("file content is :%s \n", str);  // printed
    fseek(fp,-22,SEEK_END); // the seek set will make the cursor to go to the 6th place ( space place in the file )
    fprintf(fp," c Programming language"); // the string " C programming language is added to the file "
    rewind(fp); // then the cursor goes to the beginning of the file
    fgets(str, 35, fp); // then again the data in the file is printed
    printf("file content :%s\n", str); 
    n = ftell(fp);
    printf("total size of file :%d byte", n);
    fclose(fp);
}