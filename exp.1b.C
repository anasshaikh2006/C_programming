/* anas shaikh
251M005
mech
f*/
#include <stdio.h>

int main() {
    float physics, chemistry, math, average;
  printf("Enter marks in Physics: ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks in Mathematics: ");
    scanf("%f", &math);
 average = (physics + chemistry + math) / 3;

    printf("Average Marks: %.2f\n", average);
  if(average >= 40)
        printf("Status: Eligible\n");
    else
        printf("Status: Not Eligible\n");

    return 0;
}
