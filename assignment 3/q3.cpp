#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string exp) {
    char stack[100];
    int top = -1;

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch; // Push opening bracket
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return false; // No matching opening
            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
                return false;
        }
    }

    return top == -1; // True if stack empty
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}
