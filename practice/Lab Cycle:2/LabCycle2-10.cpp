#include "LabCycle2-10.h"

bool isOpeningBracket(char bracket) {
    return bracket == '(' || bracket == '[' || bracket == '{';
}

bool isClosingBracket(char bracket) {
    return bracket == ')' || bracket == ']' || bracket == '}';
}

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '[' && closing == ']') ||
           (opening == '{' && closing == '}');
}

bool isBalanced(const string& expression) {
    stack<char> brackets;

    for (char bracket : expression) {
        if (isOpeningBracket(bracket)) {
            brackets.push(bracket);
        } else if (isClosingBracket(bracket)) {
            if (brackets.empty() || !isMatchingPair(brackets.top(), bracket)) {
                return false; 
            }
            brackets.pop();
        }
    }

    return brackets.empty(); 
}
