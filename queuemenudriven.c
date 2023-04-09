/* Queue : menu driven
    1.Using Array
    2.Using Linked List
*/
#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Removed %d from queue\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    printf("ABHIJEET  KUMAR MCA 2nd SEM 42\n");
    printf("QUEUE USING ARRAY MENU DRIVEN PROGRAM....");
    printf("Queue Menu\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Quit\n");
    do {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
