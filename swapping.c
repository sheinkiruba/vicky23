#include <stdio.h>
int main()
{
   int k, v, temp;
   printf("Enter the value of k and v\n");
   scanf("%d%d", &k, &v);
   printf("Before Swapping\nk = %d\nv = %d\n",k,v);
   temp = k;
   k    = v;
   v    = temp;
   printf("After Swapping\nk = %d\nv = %d\n",k,v);
   return 0;
}
