#include <iostream>
using namespace std ;

// que 4 part 1

int main() {
	char s1[100], s2[100];

	cout << "Enter string 1:" << endl;
	cin >> s1;

	cout << "Enter string 2:" << endl;
	cin >> s2;

	int i = 0;
	while (s1[i] !='\0') {
		i++;
	}

	int j = 0;
	while (s2[j] != '\0') {
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';
	cout << endl;
	cout << "Concatenated string:" << s1 << endl;

	return 0;
}
