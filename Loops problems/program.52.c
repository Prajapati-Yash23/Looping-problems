#include <stdio.h>

int main()
 {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0)
     {
        count++;
        temp = temp / 10;   // remove last digit
    }

    printf("%d %d digit.\n", n, count);
   

    return 0;
}