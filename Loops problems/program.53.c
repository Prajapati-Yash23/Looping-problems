#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a value.");
    scanf("%d",&n);
     
    int temp=n;
    while(temp !=0)
    {
        s=s+temp%10;
        temp=temp/10;
    }
    printf("the sum of digit of %d is %d\n",n,s);
    return 0;
}