Creator :- Aaryan Modi
Project Name :- Matrix Multiplication

#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;

    // Entering No. of Rows and Columns of both matrices

    printf("For Matrix 1 (A)\n");

    printf("Enter No. of Rows :-\n m1 = ");
    scanf("%d", &m1);

    printf("Enter No. of Column :-\n n1 = ");
    scanf("%d", &n1);

    printf("\nFor Matrix 2 (B)\n");

    printf("Enter No. of Rows :-\n m2 = ");
    scanf("%d", &m2);

    printf("Enter No. of Column :-\n n2 = ");
    scanf("%d", &n2);

    int matrix1[m1][n1];
    int matrix2[m2][n2];
    int result[m1][n2];

    if (n1 != m2)
    {
        // Checking Matrix Multiplication is Valid or not

        printf("Matrix Multiplication is not Possible\n");
        printf("Re-Enter No. Rows and Columns for Both Matrices\n\n");

        printf("For Matrix 1 (A)\n");

        printf("Enter No. of Rows :-\n m1 = ");
        scanf("%d", &m1);

        printf("Enter No. of Column :-\n n1 = ");
        scanf("%d", &n1);

        printf("\nFor Matrix 2 (B)\n");

        printf("Enter No. of Rows :-\n m2 = ");
        scanf("%d", &m2);

        printf("Enter No. of Column :-\n n2 = ");
        scanf("%d", &n2);
    }

    else
    {
        // Entering Elements of Matrix 1(A)

        printf("Matrix 1(A):\n");

        for (int i = 1; i <= m1; i++)
        {
            for (int j = 1; j <= n1; j++)
            {
                printf("A%d%d = ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        // Printing Matrix 1(A)

        printf("\nA = ");
        for (int i = 1; i <= m1; i++)
        {
            for (int j = 1; j <= n1; j++)
            {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n    ");
        }

        // Entering Elements of Matrix 2(B)

        printf("\nMatrix 2(B):\n");

        for (int i = 1; i <= m2; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                printf("B%d%d = ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        // Printing Matrix 2(B)

        printf("\nB = ");
        for (int i = 1; i <= m2; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n    ");
        }

        // Convert all Elements of Result Matrix to 0

        for (int i = 0; i <= m1; i++)
        {
            for (int j = 0; j <= n2; j++)
            {
                result[i][j] = 0;
            }
        }

        // Multiplication of Two Matrices

        for (int i = 1; i <= m1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                for (int k = 1; k <= n1; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        // Printing A X B(Result Matrix)

        printf("\nA X B = ");

        for (int i = 1; i <= m1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n        ");
        }
    }
    return 0;
}
