#include<stdio.h>
int main()
{
char str[92];
int k,v;
printf("\nEnter the string:");
scanf("%s",&str);
printf("\n Enter the range: ");
scanf("%d",&k);
for(v=0;v<k;v++)
{
printf("%c",str[v]);
}
return 0;
}
