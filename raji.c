#include <stdio.h>
#include <string.h>
int main()
{
    char k[123];
    int count = 0, i;
    printf("enter the string\n");
    scanf("%s", k);
    for (i = 0;k[i] != '\0';i++)
    {
        if (k[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
