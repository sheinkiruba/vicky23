#include<stdio.h>
#include<string.h>
int main()
{
char k[50];
int i,len;
printf("Enter the Alpha numeric");
scanf("%s",k);
len=strlen(k);
for(i=0;i<len;i++)
{
if(k[i]>='0'&&k[i]<='9')
{
printf("%c",k[i]);
}
}return 0;
}
