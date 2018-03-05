#include<stdio.h>
 int main()
 {
    int num, k, v;
    printf("Enter an integer\n");
    scanf("%d", &num);
    printf("Enter the minimum and maximum range\n");
    scanf("%d %d", &k, &v);
    if((num-k)*(num-v) <= 0)
    {
        printf("%d is in range of [%d, %d]", num, k, v);
    }
    else
    {
     printf("%d is not in range of [%d, %d]",  num, k, v);
    }
    return 0;
}
 
