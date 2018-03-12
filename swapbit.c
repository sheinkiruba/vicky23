#include <stdio.h>
#include <string.h>
int swap(int*, int *);
int main()
{
    int n1, n2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &n1, &n2);
    printf("\nThe numbers before swapping are Num1= %d Num2 = %d", n1, n2);
    swap(&n1, &n2);        
    printf("\nThe numbers after swapping are Num1= %d Num2 = %d", n1, n2);
}
int swap(int *k, int *v)
{
    *k = *k ^ *v;
    *v = *k ^ *v;
    *k = *k ^ *v;
}
