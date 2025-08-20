#include <iostream>
using namespace std;

void deletevowel(char s1[100]) {
	int i = 0;
	while (s1[i] != '\0') {
		i++;
	}

	int j = 0;
	while (j < i) 
	{
		if (s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u' || s1[j] == 'A' || s1[j] == 'E' || s1[j] == 'I' || s1[j] == 'O' || s1[j] == 'U')
		{
			for (int k = j; k < i; k++)
			{
				s1[k] = s1[k + 1];
			}
			i--;
		}
		else j++;
	}


	cout << "String w/o vowels : " << s1 << endl;
}
int main()
{
	char s1[100];
	cout << "Enter string: " << endl;
	cin >> s1;    
	 
	deletevowel(s1);

	return 0;
}
