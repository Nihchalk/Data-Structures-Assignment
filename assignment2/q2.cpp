#include <iostream>
using namespace std ;

void bubblesort(int arr[], int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - pass - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}

		}

	}
}

int main() {
	int n = 7;
	int arr[] = { 64,34,25,12,22,11,90 };

	bubblesort(arr, n);

	cout << "Sorted array:";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

