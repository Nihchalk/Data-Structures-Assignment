#include<iostream> 
using namespace std;

void deleteDuplicates(int arr[], int& n) {
    int flag = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                flag = 1; 

                
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }

    if (flag == 1) {
        cout << "Array after removing duplicates:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "No duplicates found."<<endl;
    }
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    deleteDuplicates(arr,n);

    return 0;
    }
