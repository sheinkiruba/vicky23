#include <stdio.h>
int main()
{
    int arr[5];
    int i, k;
    printf("Enter size of array: ");
    scanf("%d", &k);
    printf("Enter %d elements in the array : ", k);
    for(i=0; i<k; i++)
    {
        scanf("%d", &arr[5]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<k; i++)
    {
        printf("%d, ", arr[5]);
    }
    return 0;
}
