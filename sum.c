#include<stdio.h>
int main() 
{
int k,v,sum=0;
printf("Enter a number:");
scanf("%d",&v);
for(k=1;k<=v;k++)
{
sum=sum+k;
}
printf("The sum of natural number:%d",sum);
return 0;
}
