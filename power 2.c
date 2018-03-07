#include <stdio.h>
int main()
{
    int k;
    int tempNum,flag;
    printf("Enter an integer number: ");
    scanf("%d",&k);
    tempNum=k;
    flag=0;
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
    if(flag==0)
        printf("%d is a number that is the power of 2.",k);
    else
        printf("%d is not the power of 2.",k);
    return 0;
}
