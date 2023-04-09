/* Stack : menu driven
    1.Using Array
    2.Using Linked List
*/

#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

void push(int data) {
    if (top >= MAXSIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice, data;
    printf("ABHIJEET KUMAR MCA 2nd SEM 42\n");
    printf("STACK USING ARRAY MENU DRIVEN PROGRAM....");

    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                if (data != -1) {
                    printf("Popped element is %d\n", data);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}
