#include "LabCycle2-11.h"

int recursiveFunction(int n) {
    stack<int> callStack;

    callStack.push(n);

    int result = 1; 

    while (!callStack.empty()) {
        int currentN = callStack.top();
        callStack.pop();

        if (currentN == 0) {
            result = 1; 
        } else {
            callStack.push(currentN - 1);
            callStack.push(currentN - 1);
        }
    }

    return result;
}
