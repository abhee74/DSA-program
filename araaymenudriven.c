// ARRAY menu Driven program c
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice = -1;
    
    // Variables to store the numbers
    int a, b;
    
    // Menu display
    printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    
    // Infinite Loop for choice input
    while(1){
        printf("\nEnter the operation you wish to perform:");
        scanf("%d", &choice);
        
        // If-else ladder
        if(choice == 1){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("Result: %d + %d = %d\n", a, b, (a+b));
        }
        else if (choice == 2){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("Result: %d - %d = %d\n", a, b, (a-b));
        }
        else if (choice == 3){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("Result: %d * %d = %d\n", a, b, (a*b));
        }
        else if (choice == 4){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("Result: %d / %d = %d\n", a, b, (a/b));
        }
        else if (choice == 5){
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            break;
        }
        else{
            printf("> Invalid Input\n");
        }
    }
    return 0;
}