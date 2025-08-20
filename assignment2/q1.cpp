#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) 
{
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] < key) {
			low = mid + 1;
		}
		else {
			high = mid + 1;
		}
	}
	return -1;
}

int main() {
	const int MAX = 100;
	int arr[MAX];
	int n, key;

	cout << "Enter no of elements:" << endl;
	cin >> n;

	cout << "Enter sorted list of " << n << " elements:"<<endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Enter element to search:"<<endl;
	cin >> key;
	 
	int result=binarySearch(arr, n, key);
	if (result != -1)
		cout << "Element found at index " << result << endl;
	else
		cout << "Element not found in array" << endl;

	return 0;
}

