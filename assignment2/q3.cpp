#include <iostream>
using namespace std ;

int findmissingno(int arr[],int n) {
	int sum = 0;
	for (int i = 0; i < n-1; i++) {
		sum = sum + arr[i];
	}

	int missingno = 0;
	missingno = n * (n + 1) / 2 - sum;
	
	return (missingno);
}

int main() {
	int n, arr[100];
		cout << "Enter value of n:";
		cin >> n;
		cout << "Enter "<<n-1<<" elements:";
		for (int i = 0; i < n-1; i++)
			cin >> arr[i];

	int missingno = findmissingno(arr, n);
	cout << "The missing no is :" << missingno<<endl;

	return 0;

}
