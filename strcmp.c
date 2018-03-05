#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    gets(a);    
    printf("Enter the second string\n");    
    gets(b);
       if( strcmp(a,b) <= 0 )
        printf("The strings are equal \n%d \n%d.\n");
    else
        printf("The greatest string is %d %d .\n");
        return 0;
}
 
