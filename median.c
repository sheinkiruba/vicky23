#include <stdio.h>
void swap(int *v,int *k) {
   int s; 
   s=*v; 
   *v=*k; 
   *k=s;
}
void sort(int a[],int n) { 
   int i,j,temp;
   for(i=0;i<n-1;i++) {
      for(j=0;j<n-i-1;j++) {
         if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}
int main() {
   int a[] = {6,3,8,5,1};
   int n = 5;
   int sum,i;
   sort(a,n);
   n = (n+1) / 2 - 1;
   printf("Median = %d ", a[n]);
   return 0;
}
