#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks (0–100):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    int freq[101] = {0}; // frequency array for marks 0–100

    for(int i = 0; i < n; i++)
        freq[marks[i]]++;

    printf("\nFrequency of each mark:\n");
    for(int i = 0; i <= 100; i++) {
        if(freq[i] > 0)
            printf("Mark %d: %d student(s)\n", i, freq[i]);
    }

    return 0;
}
