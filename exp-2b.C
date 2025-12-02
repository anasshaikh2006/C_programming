#include <stdio.h>

int main() {
    int start, end, i, sum = 0;
 printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
  for(i = start; i <= end; i++) {
        if(i % 2 != 0) {  
            sum += i;    
        }
    }

    printf("Sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
