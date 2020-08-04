#include <iostream>
#define MAX 100

using namespace std;

class QUEUE {
protected:
    int front;
    int rear;
    int data[MAX];
public:
    QUEUE() { front = rear = 0; }
    bool isEmpty() { return front == rear; }
    bool isFull() { return (rear + 1) % MAX == front; }

    void enqueue(int a) {
        if (isFull())
            cout << "ť�� ��ȭ �����Դϴ�." << endl;
        else {
            rear = (rear + 1) % MAX;
            data[rear] = a;
        }
    }

    int dequeue() {
        if (isEmpty())
            cout << "ť�� ����ֽ��ϴ�." << endl;
        else {
            front = (front + 1) % MAX;
            return data[front];
        }
    }

    void display() {
        cout << "QUEUE : [" << " ";
        int max = (front < rear) ? rear : rear + MAX;
        for (int i = front + 1; i <= max; i++) {
            cout << data[i % MAX] << " ";
        }
        cout << "]\n";
    }
};
