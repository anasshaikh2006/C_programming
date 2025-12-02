/* anas shaikh
251M005
mech
f*/
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) { // Using pointer arithmetic
    }
  printf("Array in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));  // Access elements using pointer
    }
    printf("\n");

    return 0;
}
