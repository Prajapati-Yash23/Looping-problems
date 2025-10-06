#include<stdio.h>
int main()
{
   int i,n,l,s;
   printf("Enter 100 numbers:\n");
   scanf("%d",&n);
   l=s=n;
   for(i=2;i<=100;i++)
   {
     scanf("%d",&n);
     if(n>l)
     {
        l=n;
     }
     if(n<s)
     {
        s=n;
     }
     printf("largest number =%d\n",l);
      printf("smallest number =%d\n",s);
     return 0;
   }

}