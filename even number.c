#include <stdio.h>
int main()
{
	int num;
	int k;
	num=1;
	printf("Enter the value of N: ");
	scanf("%d",&k);
	printf("Even Numbers from 1 to %d:\n",k); 
	while(num<=k)
	{
		if(num%2==0)
			printf("%d ",num);
		num++;
	}
	return 0;
}
