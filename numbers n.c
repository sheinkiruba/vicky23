#include <stdio.h>
int main()
{
    int i, k;
    printf("Enter any number: ");
    scanf("%d", &k);
    printf("Numbers from 1 to %d : \n", k);
    for(i=1; i<=k; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}    
