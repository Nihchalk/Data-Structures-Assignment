#include <iostream>
using namespace std ;

void revstring(char s1[100])
{
	int i = 0;
	while (s1[i] != '\0') {
		i++;
	}

	int start = 0, end = i - 1;
	while (start < end)
	{
		char temp = s1[start];
		s1[start] = s1[end];
		s1[end] = temp;
		start++;
		end--;

	}
	cout << "Reversed string : " << s1 << endl;
}
int main() {
	char s1[100];

	cout << "Enter string 1:" << endl;
	cin >> s1;

	revstring(s1);

	return 0;
}
