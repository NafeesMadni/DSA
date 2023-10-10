#ifndef Queue_h
#define Queue_h

class Queue {
    int *arr;
    int elements, qfront, rear;
public:
    const static int SIZE = 10;
    
    Queue() {
        elements = qfront = rear = 0;
        arr = new int[SIZE]; 
    }

    bool isEmpty() const { 
        return elements == 0;
    }

    bool isFull() const {
        return elements == SIZE;
    }
    
    int front() {
        if(isEmpty()) return -1;
        return arr[qfront];
    }

    void enqueue(const int);
    void dequeue();
};

void Queue :: enqueue(const int x) {
    if(isFull()) return ;

    arr[rear++] = x;
    elements++;
}

void Queue :: dequeue() {
    if(isEmpty()) return ;
    qfront++;
    elements--;

    return ;
}

#endif /* Queue_h */
