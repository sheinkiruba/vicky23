#include<stdio.h>
int main()
{
int k,v,s[10],d,i;
printf("enter the number :");
scanf("%d",&k);
printf("enter the number place:");
scanf("%d",&v);
for(i=0;i<=k;i++)
{
scanf("%d",&s[i]);
}
printf("%d",s[v]);

return 0;
}
