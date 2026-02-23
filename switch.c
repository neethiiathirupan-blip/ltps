#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    do {
        printf("\n--- KCT Student Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Boolean\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if(choice == 7) {
            printf("Exiting calculator...\n");
            break;
        }

        if(choice == 0 || choice > 7) {
            printf("Invalid choice! Please select between 1 and 7.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch(choice) {

            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Cannot divide by zero!\n");
                }
                break;
            
            case 5:{
                if(num2 != 0) {
                    result = num1 % num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Cannot divide by zero!\n");
                }
                break;
            }
            case 6: {
                int x = (int)num1;
                int y = (int)num2;

                printf("x == y : %d\n", x == y);
                printf("x != y : %d\n", x != y);
                printf("x > y  : %d\n", x > y);
                printf("x < y  : %d\n", x < y);
                printf("x >= y : %d\n", x >= y);
                printf("x <= y : %d\n", x <= y);
                break;
            }
        }

    } while(choice != 7);

    return 0;
}