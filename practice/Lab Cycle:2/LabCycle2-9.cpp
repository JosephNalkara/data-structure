#include "LabCycle2-9.h"
#include <stack>
#include <cctype>

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int performOperation(char op, int operand1, int operand2) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0; 
    }
}

int evaluatePostfix(const string& postfix) {
    stack<int> operands;

    for (char c : postfix) {
        if (isdigit(c)) {
            operands.push(c - '0'); 
        } else if (isOperator(c)) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            operands.push(performOperation(c, operand1, operand2));
        }
    }

    return operands.top();
}
