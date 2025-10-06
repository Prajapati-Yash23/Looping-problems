#include<stdio.h>
int main()
{
  int i,n,s=0;
  printf("Enter a value.");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    s=s+i;
  }
        printf("sum of %d natural""number is %d",n,s);

}
