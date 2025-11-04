#include <stdio.h>

int main() {
    int month;

    printf("Enter week number (1-12): ");
    scanf("%d", &week);

    switch (month) {
        case 1:
            printf("janvary\n");
            break;
        case 2:
            printf("febrary\n");
            break;
        case 3:
            printf("march\n");
            break;
        case 4:
            printf("april\n");
            break;
        case 5:
            printf("may\n");
            break;
        case 6:
            printf("june\n");
            break;
        case 7:
            printf("july\n");
            break;
        case 8:
            printf("august\n");
            break;
        case  9:
            printf("september\n");
            break;
        case 10:
            printf("october\n");
            break;
        case 11:
            printf("november\n");
            break;
        case 12:
            printf("desember\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
