#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        top++;
        stack[top] = str[i];
    }

   
    string rev = "";
    while (top != -1) {
        rev += stack[top];
        top--;
    }

    cout << "Reversed string: " << rev << endl;
}
