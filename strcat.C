#include<stdio.h>
#include<string.h>
int main()
{
  char k[50],v[50];
  static int i=0;
  int j=0;
  printf("\nEnter First String\n");
  gets(k);
  printf("\nEnter Second String\n");
  gets(v);
  while(k[i]!='\0')
  {
    i++;
  }
 
  while(v[j]!='\0')
  {
    k[i]=v[j];
    j++;
    i++;
  }
  k[i]='\0';
  printf("\nConcatenated String is %s",k);
  return 0;
}
