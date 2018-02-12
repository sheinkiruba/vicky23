#include <stdio.h>
#include <stdlib.h>
int min = 224;
int main ( void )
{
if ( (min / 60) == 1 )
printf("%d hour",min/60);
else
printf("%d hours",min/60);
if ( (min % 60) == 1)
printf(" %d minute\n",min%60);
else 
printf(" %d minutes\n",min%60);
return 0;
}
