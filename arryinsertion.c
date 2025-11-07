#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;


    printf("Enter number of elements in array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position where you want to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }


    arr[pos - 1] = value;
    n++;


    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}