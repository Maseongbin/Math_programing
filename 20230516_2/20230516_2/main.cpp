#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*



int main(void)
{
   int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int det_A;

   det_A = (A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1]) - (A[0][2] * A[1][1] * A[2][0]) - (A[0][1] * A[1][0] * A[2][2]) - (A[0][0] * A[1][2] * A[2][1]);

   printf("det(A) = %d�Դϴ�\n", det_A);

   return 0;
}
*/

int main(void)
{
    int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int B[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
    int C[3][3] = {};

    printf("Mat_C = Mat_A x Mat_B");
    printf("\n");

    C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]) + (A[0][2] * B[2][0]);
    C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]) + (A[0][2] * B[2][1]);
    C[0][2] = (A[0][0] * B[0][2]) + (A[0][1] * B[1][2]) + (A[0][2] * B[2][2]);

    C[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]) + (A[1][2] * B[2][0]);
    C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]) + (A[1][2] * B[2][1]);
    C[1][2] = (A[1][0] * B[0][2]) + (A[1][1] * B[1][2]) + (A[1][2] * B[2][2]);

    C[2][0] = (A[2][0] * B[0][0]) + (A[2][1] * B[1][0]) + (A[2][2] * B[2][0]);
    C[2][1] = (A[2][0] * B[0][1]) + (A[2][1] * B[1][1]) + (A[2][2] * B[2][1]);
    C[2][2] = (A[2][0] * B[0][2]) + (A[2][1] * B[1][2]) + (A[2][2] * B[2][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}