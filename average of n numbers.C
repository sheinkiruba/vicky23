#include<stdio.h>
int main()
{
  int i,k,Sum=0,numbers;
  float Average;
  printf("\nEnter How many Number you want?");
  scanf("%d",&k);
  printf("\nEnter the elements one by one");
  for(i=0;i<k;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }
  Average = Sum/k;
  printf("\nSum of the %d Numbers = %d",k, Sum);
  printf("\nAverage of the %d Numbers = %f",k, Average);
  return 0;
}
