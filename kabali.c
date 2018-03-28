#include<stdio.h>
int main()
{
int k,v,s;
printf("Kabali clan");
scanf("%d",&k);
printf("opposite clan");
scanf("%d",&v);
if(k<=1024&&v<=1012)
{
s=v-k;
printf("\n %d",s);
}
else
{
printf("\nEnd of file");
}
return 0;
}
