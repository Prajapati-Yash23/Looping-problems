#include <stdio.h>

int main() {
    int i, n, s = 0;
    float mean;

    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++) 
    {
        scanf("%d", &n);
        s += n;
    }

    mean = s / 10.0;  

    printf("S= %d\n", s);
    printf("Mean = %.2f\n", mean);

    return 0;
}