#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value.");
    scanf("%d",&n);

    printf("digits separated:");
    while(n>0)
    {
        int digit=n%10;
        printf("%d",digit);
        n=n/10;
    
    }
    return 0;
}