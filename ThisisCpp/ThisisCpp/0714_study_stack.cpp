#include<iostream>
using namespace std;

const int MAX = 10;

class STACK {
private:
	int top = -1;
	int arr[MAX];


public:
	//Stack push() : �Է��ϰ��� �ϴ� �� �迭�� push �� top ���� ����.
	void push(int num) {
		if (top == MAX - 1) cout << "������ �� á���ϴ�!" << endl;
		else arr[++top] = num;
	}

	//Stack pop() : ��ȯ�ϰ��� �ϴ� �� pop �� top ���� ����.
	int pop() {
		//�迭 ���� Ȯ�� �� ������� ���, -1 ��ȯ
		if (isEmpty() == false) return -1;
		else return arr[top--];
	}

	// Stack check() : top�� ��ġ�� �� Ȯ��.
	int check() {
		if (isEmpty() == false)	return -1;
		else return arr[top];
	}

	//Stack isEmpty() : �迭 arr[]�� ���� üũ �Լ�
	bool isEmpty() {
		if (top == -1) return false;
		else return true;

	}

	//Stack display() : ���� �迭�� ��� ��� ��� �� ���
	void display() {
		for (int i = 0; i < top + 1; i++) cout << arr[i] << " ";
		cout << endl;
	}
};



int main(void) {

	STACK stack;
	int num;

	stack.push(1);

	cout << stack.pop() << endl;
	cout << stack.pop() << endl;

	stack.push(10);
	cout << stack.check() << endl;
	cout << stack.pop() << endl;
	cout << stack.check() << endl;

	stack.push(10);
	stack.push(2);
	stack.push(111);
	stack.push(10);
	stack.push(2);
	stack.push(111);
	stack.push(10);
	stack.push(2);
	stack.push(111);
	stack.push(10);
	stack.push(2);
	stack.push(111);

	stack.display();


	return 0;
}