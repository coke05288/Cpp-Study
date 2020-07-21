#include<iostream>
using namespace std;

const int MAX = 10;

class STACK {
private:
	int top = -1;
	int arr[MAX];


public:
	//Stack push() : 입력하고자 하는 값 배열에 push 후 top 변수 증가.
	void push(int num) {
		if (top == MAX - 1) cout << "스택이 꽉 찼습니다!" << endl;
		else arr[++top] = num;
	}

	//Stack pop() : 반환하고자 하는 값 pop 후 top 변수 감소.
	int pop() {
		//배열 공백 확인 후 비어있을 경우, -1 반환
		if (isEmpty() == false) return -1;
		else return arr[top--];
	}

	// Stack check() : top에 위치한 값 확인.
	int check() {
		if (isEmpty() == false)	return -1;
		else return arr[top];
	}

	//Stack isEmpty() : 배열 arr[]의 공백 체크 함수
	bool isEmpty() {
		if (top == -1) return false;
		else return true;

	}

	//Stack display() : 스택 배열에 담긴 모든 요소 값 출력
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