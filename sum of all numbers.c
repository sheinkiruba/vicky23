#include <stdio.h>
void main()
{
    int k, temp, digit, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &k);
    temp = k;
    while (k > 0)
    {
        digit = k % 10;
        sum  = sum + digit;
        k /= 10;
    }
    printf("Given number = %d\n", temp);
    printf("Sum of the digits %d = %d\n", temp, sum);
}
