#include <iostream>
#include "Queue.h"
#include "Stack.h"
using namespace std;

bool searchElement (Stack &s, const int x) {
    bool isPresent = false;
    Queue q;

    // stack [1, 2, 3, 4] 
    // Queue [ ] --> empty
    
    // search and pop elements of stack into queue
    while (!s.isEmpty()) {
        if(x == s.top())
            isPresent = true;
        q.enqueue(s.top());
        s.pop();
    }
    // stack [ ] --> empty
    // Queue [4, 3, 2, 1]


    // pop and push queue elements into stack
    while (!q.isEmpty()) {
        s.push(q.front());
        q.dequeue();
    }
    // stack [4, 3, 2, 1] 
    // Queue [ ] --> empty
    

    // push and pop stack elements into queue
    while (!s.isEmpty()) {
        q.enqueue(s.top());
        s.pop();
    }
    // stack [ ] --> empty
    // Queue [1, 2, 3, 4] 


    // pop and push queue elements into stack
    while (!q.isEmpty()) {
        s.push(q.front());
        q.dequeue();
    }
    // stack [1, 2, 3, 4] 
    // Queue [ ] --> empty
    

    return isPresent;
}

int main() {
    Stack s;
    cout << "Stack Size: " << Stack::SIZE << endl;
    s.push(2);
    s.push(9);
    s.push(-1);
    s.push(99);
    s.push(0);

    cout << boolalpha << searchElement(s, -1) << endl;

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }  
} 