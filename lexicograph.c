#include <stdio.h>
#include<string.h>
int main() 
{
int i,j,k=0;
char p[100];
gets(p);
for(i=0;p[i]!='\0';i++)
{
for(j=i+1;p[j]!='\0';j++)
{
if(p[i]>p[j])
{
k=p[i];
p[i]=p[j];
p[j]=k;
}
}
}
puts(p);
return 0;
}
