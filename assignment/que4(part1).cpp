#include <iostream>
using namespace std;

void reverse(int arr[], int n) { 
    int i = 0;
    int j = n - 1;
    for (; i<j;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
       
    }
    cout << "Reversed array is: ";
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";

}


int main() {
    int arr[100], n;
    cout << "Enter no of elements:";
    cin >> n;

    cout << "Enter " << n << " elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(arr, n);

    
        return 0;
}

