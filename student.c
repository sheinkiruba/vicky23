#include<stdio.h>
int main()
{
int k,v,s,d;
printf("\n Enter the 1st number ");
scanf("%d",&k);
printf("\n Enter the 2nd number");
scanf("%d",&v);
s=k/v;
d=k%v;
printf("\n %d",s);
printf("\n %d",d);
return 0;
}
