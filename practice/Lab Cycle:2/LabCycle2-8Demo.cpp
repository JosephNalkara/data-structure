#include "LabCycle2-8.cpp"

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix<char>(infix);
    string prefix = infixToPrefix<char>(infix);

    cout << "Posa+tfix expression: " << postfix << endl;
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
