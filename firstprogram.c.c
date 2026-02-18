#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int sum;
    float percentage;

    printf("Enter marks of student 1: ");
    scanf("%d", &m1);

    printf("Enter marks of student 2: ");
    scanf("%d", &m2);

    printf("Enter marks of student 3: ");
    scanf("%d", &m3);

    printf("Enter marks of student 4: ");
    scanf("%d", &m4);

    printf("Enter marks of student 5: ");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;

    percentage = (sum / 500.0) * 100;   // Assuming each mark is out of 100

    printf("\nTotal Marks = %d", sum);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
