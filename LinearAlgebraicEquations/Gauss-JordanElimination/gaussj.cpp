#include "../../nr/nr3.h"
#include "../../nr/gaussj.h"
using namespace std;

int main(void)
{
    printf("Please input the size of matrix:");
    int n;
    scanf("%d", &n);

    float b[n*n];

    printf("\nPlease input the matrix:");
    for (int i = 0; i < n*n; i++)
    {
        scanf("%f", &b[i]);
    }

    MatDoub a(3, 3);

    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = b[i*n+j];
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }

    gaussj(a);

    printf("\nThe inverse matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
