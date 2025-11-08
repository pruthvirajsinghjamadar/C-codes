#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        
        if(i == 0)
            largest = arr[i];
        else if(arr[i] > largest)
            largest = arr[i];
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
