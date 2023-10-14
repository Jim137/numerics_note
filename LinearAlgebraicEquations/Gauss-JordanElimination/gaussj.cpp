#include <iostream>

#include "../../nr/nr3.h"
#include "../../nr/gaussj.h"
using namespace std;

int main(void)
{
    cout << "This program is used to calculate the inverse matrix of a given matrix." << endl;
    int n;
    cin >> n;

    float b[n*n];

    cout << "Please input the matrix:" << endl;
    for (int i = 0; i < n*n; i++)
    {
        cin >> b[i];
    }

    MatDoub a(3, 3);

    cout << "The matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = b[i*n+j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    gaussj(a);

    cout << "The inverse matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
