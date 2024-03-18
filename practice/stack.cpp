#include<iostream>
using namespace std;

class stack {
public:
    int s[10];
    int top;
    int size;
    
    stack() { 
        top = -1;
        size = 10;
    }
    
    bool is_Empty() {
        return (top == -1);
    }
    
    bool is_Full() {
        return (top == size - 1);
    }
    
    void Push() {
        char ch;
        do {
            int x;
            if (!is_Full()) {
                cout << "Enter the element to be pushed: ";
                cin >> x;
                top++;
                s[top] = x;
            }
            else {
                cout << "Stack overflow" << endl;
                return; 
            } 
            cout << "Do you want to push more elements? (y/n): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
    }
    
    void Pop() {
        char c;
        do {
        if (!is_Empty()) {
            top--;
        }
        else {
            cout << "Stack underflow" << endl; 
        }
        cout << "Do you want to pop more elements? (y/n): ";
        cin >> c;
        } while (c == 'y' || c == 'Y');
    }   
    
    void Peek() {
        if (!is_Empty()) {
            cout << "The peek element is: " << s[top] << endl;
        }
        else {
            cout << "Stack is empty" << endl;
        }
    }
    
    void status() {
        cout << "The status is: " << ((top + 1) * 10 / size) << "%" << endl;
    }
};

int main() {
    stack st;
    char an = 'y';
    do {
        int ch;
        cout << "Enter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for status\n";
        cin >> ch;
        switch(ch) {
            case 1:
                st.Push();
                break;
            case 2:
                st.Pop();
                break;
            case 3:
                st.Peek();
                break;
            case 4:
                st.status();
                break;
            default:
                cout << "Invalid entry" << endl;
        }
        cout << "Do you want to continue (yes/no): ";
        cin >> an;
    } while (an == 'y' || an == 'Y');
    
return 0;
}

