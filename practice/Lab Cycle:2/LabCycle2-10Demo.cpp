#include "LabCycle2-10.cpp"

int main() {
    string expression;
    cout << "Enter the bracket expression: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }

    return 0;
}
