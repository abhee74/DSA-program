/* Recursion : menu Driven 
   1. HCF 
   2. LCM 
   3. Factorial 
   4. Fibbonacci 
*/

#include <stdio.h>

// function prototypes
int hcf(int num1, int num2);
int lcm(int num1, int num2);
int factorial(int num);
int fibonacci(int num);

int main() {
    int choice, num1, num2, result;
    printf("ABHIJEET KUMAR MCA 2nd_SEM F 42");
    printf("\nRECURSION MENU DRIVEN PROGRAM OF HCF, LCM, FACTORIAL, FIBONACCI");
    
    do {
        printf("\nMenu:\n");
        printf("1. HCF\n");
        printf("2. LCM\n");
        printf("3. Factorial\n");
        printf("4. Fibonacci\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = hcf(num1, num2);
                printf("HCF of %d and %d is %d\n", num1, num2, result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = lcm(num1, num2);
                printf("LCM of %d and %d is %d\n", num1, num2, result);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num1);
                result = factorial(num1);
                printf("Factorial of %d is %d\n", num1, result);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num1);
                printf("Fibonacci series up to %d terms: ", num1);
                for(int i=0; i<num1; i++) {
                    result = fibonacci(i);
                    printf("%d ", result);
                }
                printf("\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 5);
    
    return 0;
}

// function to find HCF of two numbers
int hcf(int num1, int num2) {
    if(num2 != 0) {
        return hcf(num2, num1 % num2);
    } else {
        return num1;
    }
}

// function to find LCM of two numbers
int lcm(int num1, int num2) {
    static int multiple = 1;
    if(multiple % num1 == 0 && multiple % num2 == 0) {
        return multiple;
    } else {
        multiple++;
        lcm(num1, num2);
        return multiple;
    }
}

// function to find factorial of a number
int factorial(int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// function to find nth Fibonacci number
int fibonacci(int num) {
    if(num == 0 || num == 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
