#include <stdio.h>
int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int  wordcount;
 wordcount = 0;
  printf("Enter a filename :");
  gets(filename);
   fp = fopen(filename,"r");
   if ( fp )
   {	
	   while ((ch=getc(fp)) != EOF) {
		   if (ch == ' ' || ch == '\n') 
		   {
		   	++wordcount;
		   }
    }
   }
    printf("Words : %d \n", wordcount);
    return(0);
    }
