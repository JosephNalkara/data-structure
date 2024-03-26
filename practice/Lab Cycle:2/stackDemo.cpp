#include <iostream>
#include "stackmain.cpp"

int main() {
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Top element: " << intStack.peek() << std::endl;

    intStack.pop();
    std::cout << "Top element after pop: " << intStack.peek() << std::endl;

    return 0;
}   
