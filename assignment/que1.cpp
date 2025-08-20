#include<iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n = 0;

void create() {
    cout << "Enter no of elements:";
    cin >> n;

    cout << "Enter " << " " << n << " " << "elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
}

void display() {
    if (n == 0)
        cout << "Array is empty";
    else
        cout << "Array elements:";
        for (int i = 0; i < n; i++)
            cout << arr[i] <<endl;
}

void insert() {
    int pos,val;
    cout << "Enter position (1 to " << n + 1 << ")";
    cin >> pos;
    if (pos<1 || pos >n + 1)
    cout << "Invalid position";

    cout << "Enter value:";
    cin >> val;
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[ pos - 1] = val ;
    n++;
}
void Delete() {
    int pos;
    cout << "Enter position:";
    cin >> pos;
    for (int i = pos-1; i < n-1; i++) {
        arr[pos] =arr[pos+1];
    }
    n--;
}
void search() {
    int x;
    cout << "Enter value to search: ";
    cin >> x;

    int flag = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at position: " << i + 1 << endl;
            flag = 1; 
            break;
        }
    }

    if (flag == 0) {
        cout << "Element not found" << endl;
    }

}
int main() {
    int choice;
    do {
        cout << endl << "----- MENU -----" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY"<<endl;
        cout << "3. INSERT"<<endl;
        cout << "4. DELETE"<<endl;
        cout << "5. LINEAR SEARCH"<<endl;
        cout << "6. EXIT"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: create(); break;
        case 2: display(); break;
        case 3: insert(); break;
        case 4: Delete(); break;
        case 5: search(); break;
        case 6: cout << "Exiting program..."<<endl;
            break;
        default: cout << "Invalid choice! Please try again."<<endl;
        }
    } while (choice != 6);

    return 0;
}
