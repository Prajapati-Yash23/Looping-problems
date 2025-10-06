#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M for Male, F for Female):\n");
    for (i = 1; i <= 50; i++)
     {
        printf("Student %d: ", i);
        scanf(" %c", &sex);

        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid input! Please enter M or F.\n");
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}