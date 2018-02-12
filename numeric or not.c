#include<stdio.h>
int main()
{
char k[30];
int i,flag=0,v=0;
printf("enter the string:");
scanf("%s",k);
for(i=0;k[i]!='\0';i++)
{
if(k[i]=='0'||k[i]=='1'||k[i]=='2'||k[i]=='3'||k[i]=='5'||k[i]=='6'||k[i]=='7'||k[i]=='8'||k[i]=='9')
{
flag=flag+1;
}
}
if(flag==0)
{
printf("given string not contains numbers");
}
else
{
printf("given string contains numbers");
}
return 0;
}
