#include "study_queue_class.cpp"

class DEQUE : public QUEUE {
public:
	DEQUE() { };
	void addRear(int a) { enqueue(a); }
	int deleteFront() { return dequeue(); }

	void addFront(int a) {
		if (isFull())
			cout << "���� ��ȭ �����Դϴ�." << endl;
		else {
			data[front] = a;
			front = (front - 1 + MAX) % MAX;
		}
	}
	int deleteRear() {
		if (isEmpty()) {
			cout << "���� �����Դϴ�." << endl;
		}
		else {
			int ret = data[rear];
			rear = (rear - 1 + MAX) % MAX;
			return ret;
		}
	}
	void display() {
		cout << "DEQUE : [ " << endl;
		int max = (front < rear) ? rear : rear + MAX;
		for (int i = front + 1; i <= max; i++) {
			cout << data[i % MAX] << endl;
		}
		cout << " ]" << "\n";
	}
};


int main(void) {

	DEQUE test;

	return 0;
}