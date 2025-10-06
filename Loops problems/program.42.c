#include<stdio.h>
int main()
{
    int i,n;
    char a[5];
    printf("enter your name");
    scanf("%s",&a);
    printf("enter a value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%s\n",a);
    }
     return 0;

}