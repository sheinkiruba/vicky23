#include <stdio.h>
  int main() 
  {
    int k[10];
    int i;
    int maximum;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &k[i]);
    }
    maximum = k[0];
    for (i = 0; i < 10; i++) 
    {
if (k[i] >maximum) 
{
maximum = k[i];
    }
    }
    printf("\nMaximum of ten numbers is %d", maximum);
    return 0;
  }
