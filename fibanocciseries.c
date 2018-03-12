#include <stdio.h>
int main()
{
    int k = 0, v = 1, s, num, count = 0;
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", k);
    printf("%d\n", v);
    count = 2; 
    while (count < num)
    {
        s = k + v;
        count++;
        printf("%d\n", s);
        k = v;
        v = s;
   }
}
