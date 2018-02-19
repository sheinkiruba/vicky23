#include <stdio.h>
int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int  wordcount;
 wordcount = 0;
  printf("Enter a file :");
  gets(filename);
   fp = fopen(file,"r");
   if ( fp )
   {	
	   while ((ch=getc(fp)) != EOF) {
		   if (ch == ' ' || ch == '\n') 
		   {
		   	++linecount;
		   }
    }
   }
    printf("Line : %d \n", linecount);
    return(0);
    }
