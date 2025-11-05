#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter the student's marks (0–100): ");
    scanf("%d", &marks);

    // Nested if-else for grade assignment
    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            printf("Grade: A\n");
        } else {
            if (marks >= 80) {
                printf("Grade: B\n");
            } else {
                if (marks >= 70) {
                    printf("Grade: C\n");
                } else {
                    if (marks >= 60) {
                        printf("Grade: D\n");
                    } else {
                        printf("Grade: F\n");
                    }
                }
            }
        }
    } else {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    }

    return 0;
}
