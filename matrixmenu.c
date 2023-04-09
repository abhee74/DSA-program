/* Matrix: menu driven
    1.Multiplication
    2.Transpose
    3.Diagonal Swap
*/


#include <stdio.h>

int main()
{
    int array[100], choice, position, value, n, i;
    printf("ABHIJEET KUMAR MCA 2nd SEM 42\n");
    printf("ARRAY MENU DRIVEN PROGRAM....\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // loop to input elements in the array
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Traverse the array\n");
        printf("2. Insert an element at the last position\n");
        printf("3. Insert an element at a specific position\n");
        printf("4. Delete the last element\n");
        printf("5. Delete an element from a specific position\n");
        printf("6. Search for an element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Elements in the array: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", array[i]);
                }
                break;

            case 2:
                printf("Enter the element to insert at last position: ");
                scanf("%d", &value);
                array[n] = value;
                n++;
                printf("Element inserted successfully!\n");
                break;

            case 3:
                printf("Enter the position where you want to insert the element: ");
                scanf("%d", &position);
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                for (i = n-1; i >= position-1; i--)
                {
                    array[i+1] = array[i];
                }
                array[position-1] = value;
                n++;
                printf("Element inserted successfully!\n");
                break;

            case 4:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    n--;
                    printf("Last element deleted successfully!\n");
                }
                break;

            case 5:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    printf("Enter the position of the element to delete: ");
                    scanf("%d", &position);
                    for (i = position-1; i < n-1; i++)
                    {
                        array[i] = array[i+1];
                    }
                    n--;
                    printf("Element deleted successfully!\n");
                }
                break;

            case 6:
                printf("Enter the element to search: ");
                scanf("%d", &value);
                for (i = 0; i < n; i++)
                {
                    if (array[i] == value)
                    {
                        printf("Element found at position %d\n", i+1);
                        break;
                    }
                }
                if (i == n)
                {
                    printf("Element not found!\n");
                }
                break;

            case 7:
                printf("Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
