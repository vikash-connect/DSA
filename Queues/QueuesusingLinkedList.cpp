class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {

public:
    Node* front;
    Node* rear;
    int count;

    myQueue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);

        if (front == nullptr) {
            front = rear = temp;
        }
        else {
            rear->next = temp;
            rear = temp;
        }

        count++;
    }

    void dequeue() {
        if (front == nullptr)
            return;

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
        count--;
    }

    int getFront() {
        if (front == nullptr)
            return -1;

        return front->data;
    }

    int size() {
        return count;
    }
};