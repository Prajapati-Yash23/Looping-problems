#include <stdio.h>

int main() {
    int i, n, num, s = 0;
    float mean;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++) 
    {
        scanf("%d", &num);
        s += num;
    }

    mean = s/ (float)n; 

    printf("S = %d\n", s);
    printf("Mean = %.2f\n", mean);

    return 0;
}