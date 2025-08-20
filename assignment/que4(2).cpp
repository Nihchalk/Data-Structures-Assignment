#include <iostream>
using namespace std ;

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int p, int q, int r)
{
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            C[i][j] = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < q; k++)
            {
                C[i][j] += A[i][j] * B[i][j];
            }
        }
    }
    cout << "Array multiplication:"<<endl;
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int p, q, r;

    cout << "Enter rows and columns for A(p q): ";
    cin >> p >> q;
    cout << "Enter elements of matrix A:";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> A[i][j];

    cout << "Enter rows and columns for B(p q): ";
    cin >> q >> r;
    cout << "Enter elements of matrix B:";
    for (int i = 0; i < q; i++)
        for (int j = 0; j < r; j++)
            cin >>B[i][j];
     
    multiplyMatrices(A, B, C, p, q, r);
        return 0;
}
