/* Matrix: menu driven
    1.Multiplication
    2.Transpose
    3.Diagonal Swap
*/


#include <stdio.h>

int main() {
    int choice, i, j, m, n;
    int mat[10][10], res[10][10];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Choose the matrix operation:\n");
    printf("1. Multiplication\n");
    printf("2. Transpose\n");
    printf("3. Diagonal Swap\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the elements of the second matrix:\n");
            int mat2[10][10];
            int k, l, p;
            printf("Enter the number of rows and columns of the second matrix: ");
            scanf("%d %d", &k, &l);
            if(n!=k) {
                printf("Error: The number of columns of the first matrix should be equal to the number of rows of the second matrix.\n");
                return 0;
            }
            printf("Enter the elements of the second matrix:\n");
            for(i=0; i<k; i++) {
                for(j=0; j<l; j++) {
                    scanf("%d", &mat2[i][j]);
                }
            }
            for(i=0; i<m; i++) {
                for(j=0; j<l; j++) {
                    res[i][j] = 0;
                    for(p=0; p<n; p++) {
                        res[i][j] += mat[i][p] * mat2[p][j];
                    }
                }
            }
            printf("The result of matrix multiplication:\n");
            for(i=0; i<m; i++) {
                for(j=0; j<l; j++) {
                    printf("%d ", res[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("The transpose of the matrix:\n");
            for(i=0; i<n; i++) {
                for(j=0; j<m; j++) {
                    printf("%d ", mat[j][i]);
                }
                printf("\n");
            }
            break;
        case 3:
            if(m!=n) {
                printf("Error: The matrix should be square for diagonal swap.\n");
                return 0;
            }
            printf("The original matrix:\n");
            for(i=0; i<m; i++) {
                for(j=0; j<n; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
            for(i=0; i<m; i++) {
                int temp = mat[i][i];
                mat[i][i] = mat[i][n-i-1];
                mat[i][n-i-1] = temp;
            }
            printf("The matrix after diagonal swap:\n");
            for(i=0; i<m; i++) {
                for(j=0; j<n; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Error: Invalid choice.\n");
            break;
    }
return 0;
}