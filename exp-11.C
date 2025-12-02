/* anas shaikh
251M005
mech
f*/
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int choice;

    while(1) {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen("employee.dat", "ab");
                if(fp == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }

                printf("Enter Employee ID: ");
                scanf("%d", &emp.id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp.name); // Read string with spaces
                printf("Enter Employee Salary: ");
                scanf("%f", &emp.salary);
  fwrite(&emp, sizeof(emp), 1, fp);
                fclose(fp);
                printf("Employee record added successfully.\n");
                break;

            case 2:
               fp = fopen("employee.dat", "rb");
                if(fp == NULL) {
                    printf("No records found.\n");
                    break;
                }

                printf("\n--- Employee Records ---\n");
                while(fread(&emp, sizeof(emp), 1, fp)) {
                    printf("ID: %d\n", emp.id);
                    printf("Name: %s\n", emp.name);
                    printf("Salary: %.2f\n\n", emp.salary);
                }
                fclose(fp);
                break;

            case 3:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
