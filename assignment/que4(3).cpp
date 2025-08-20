#include <iostream>
using namespace std ;

void transpose(int A[10][10], int T[10][10], int p, int q)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            T[i][j] = A[j][i];
        }
    }
}

int main()
{
    int A[10][10], T[10][10];
    int p, q;

    cout << "Enter no of rows and columns :";
    cin >> p >> q;
    cout << "Enter elements of A:";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> A[i][j];
        }
            
    }

    transpose(A, T, p, q);

    cout << "Transpose of matrix A:"<<endl;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
