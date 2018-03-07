#include<stdio.h>
int main()
{
  int i,k,Sum=0,numbers;
  printf("\nEnter How many Number you want?");
  scanf("%d",&k);
  printf("\nEnter the elements one by one");
  for(i=0;i<k;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }
   printf("\nSum of the %d Numbers = %d",k, Sum);
  return 0;
}
