#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, breadth, base, height;
    const float PI = 3.14;

    printf("Menu:");
    printf("1. Area of Circle");
    printf("2. Area of Rectangle");
    printf("3. Area of Triangle");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and breadth of rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
