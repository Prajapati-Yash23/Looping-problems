#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter a value.");
   scanf("%d",&n);
   i=0;
   do
   {
      i=i+2;
      printf("%d\n",i);

   } while (i<n);
   
}