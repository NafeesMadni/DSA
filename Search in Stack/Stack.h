#ifndef Stack_h
#define Stack_h

class Stack
{
public:
    Stack();
    const static int SIZE = 10;

    bool isEmpty() {
        return elements == 0;
    }

    bool isFull() {
        return elements == SIZE;
    }
    
    int top() {
        return arr[front];
    }
    
    void push(const int);
    void pop();

private:
    int *arr;
    int elements, front;
};

Stack :: Stack() {
    arr = new int[Stack::SIZE];
    front = -1;
    elements = 0;
}

void Stack :: push(const int n) {
    if(isFull()) return ;

    arr[++front] = n;
    elements++;
}

void Stack :: pop() {
    if(isEmpty()) return ;

    front--;
    elements--;
}

#endif /* Stack_h */
