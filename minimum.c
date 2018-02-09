#include <stdio.h> 
int main() 
{
    int array[50], minimum, size, k, location = 1;
    printf("Enter the number of digits in array\n");
    scanf("%d",&size);
    printf("Enter %d integers\n", size);
    for ( k = 0 ; k < size ; k++ )
        scanf("%d", &array[k]); 
    minimum = array[0]; 
    for ( k = 1 ; k < size ; k++ ) 
    {
        if ( array[k] < minimum ) 
        {
           minimum = array[k];
           location = k+1;
        }
    }  
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
