#include <stdio.h>
int main()
{
    int arr[50];
    int size;
    int v, k, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(v=0; v<size; v++)
    {
        scanf("%d", &arr[v]);
    }

    for(v=0; v<size; v++)
    {
        for(k=v+1; k<size; k++)
        {
            if(arr[v] > arr[k])
            {
                temp     = arr[v];
                arr[v] = arr[k];
                arr[k] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order: ");
    for(v=0; v<size; v++)
    {
        printf("%d\t", arr[v]);
    }

    return 0;
}
