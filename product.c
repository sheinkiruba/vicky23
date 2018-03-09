#include <stdio.h>
void main()
{
    int k, v, s;
    printf("Enter the value of 2 numbers\n\n");
    scanf("%d %d", &k,&v);
    s=k*v;
printf("\n The product of %d and %d is %d",&k,&v,&s);
    {
        if (s % 2 == 0)
            printf("\nThe product of 2 number is even");
        else
            printf("\nThe product of 2 numbers is odd");
    }
}
