#include <iostream>
using namespace std;

void sum(int A[10][10],  int p, int q)
{
    for (int i = 0; i < p; i++)
    {
        int sum = 0;
        for(int j=0;j<q;j++)
        {
                   sum = sum + A[i][j];
        }

        cout << "Sum of row " <<i+1<<" is :" << sum << endl;
    }
    for (int j = 0; j < q; j++)
    {
        int sum = 0;
        for (int i = 0; i < p; i++)
        {
            sum = sum + A[i][j];
        }

        cout << "Sum of column " << j+1<<" is :" << sum << endl;
    }
}
int main() 
{
    int A[10][10];
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
    sum(A, p, q);
    return 0;
}
