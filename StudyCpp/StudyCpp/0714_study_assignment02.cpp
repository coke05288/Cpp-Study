#include<iostream>
#include <string.h>
using namespace std;

const int MAX_STACK_SIZE = 10000;

class ArrayStack {
private:
	int top;
	int data[MAX_STACK_SIZE];
public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}

	void Push(int a) {
		if (isFull() == false) {
			data[++top] = a;
		}
	}

	int Pop() {
		if (isEmpty()) {
			return -1;
		}
		else return data[top--];
	}

	int Size() {
		return top + 1;
	}

	int empty() {
		if (isEmpty()) return 1;
		else return 0;
	}

	int Top() {
		if (isEmpty()) return -1;
		else return data[top];
	}

	bool isEmpty() { return top == -1; }

	bool isFull() { return top == MAX_STACK_SIZE - 1; }


};

int main() {

	ArrayStack stack;

	char order[6];
	int n;
	int a;
	int check = 0;

	cin >> n;

	int* Print = new int[n];

	if (n >= 1 && n <= 10000) {
		for (int i = 0; i < n; i++) {
			cin >> order;
			if (strcmp(order, "push") == 0) {
				cin >> a;
				stack.Push(a);
			}
			if (strcmp(order, "pop") == 0) {
				Print[check] = stack.Pop();
				check++;
			}
			if (strcmp(order, "top") == 0) {
				Print[check] = stack.Top();
				check++;
			}
			if (strcmp(order, "size") == 0) {
				Print[check] = stack.Size();
				check++;
			}
			if (strcmp(order, "empty") == 0) {
				Print[check] = stack.empty();
				check++;
			}
		}
		for (int i = 0; i < check; i++) {
			cout << Print[i] << endl;
		}
	}

	delete[] Print;

	return 0;
}