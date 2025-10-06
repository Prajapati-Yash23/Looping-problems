#include<stdio.h>
int main()
{
  int n,i,f=1;
  printf("Enter a value.");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
       f=f*i;
        
    }
   printf("the factorial number is %d\n",f);
    return 0;

}