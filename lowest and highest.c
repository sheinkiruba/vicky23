#include<stdio.h>
int main()
{
  int a[50],k,i,big,small;
  printf("\nEnter the size of the array: ");
  scanf("%d",&k);
  printf("\nEnter %d elements in to the array: ", k);
  for(i=0;i<k;i++)
      scanf("%d",&a[i]);
  big=a[0];
  for(i=1;i<k;i++){
      if(big<a[i])
           big=a[i];
  }
  printf("Largest element: %d",big);
  small=a[0];
  for(i=1;i<k;i++){
      if(small>a[i])
           small=a[i];
  }
  printf("Smallest element: %d",small);
  return 0;
}
