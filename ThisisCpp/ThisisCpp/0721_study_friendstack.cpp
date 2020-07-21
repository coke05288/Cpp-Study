#include<iostream>
#include<string>
using namespace std;

class STACK {
	int top;
	int mStudentId;
	string mName;
	string mSchool;

public:
	STACK() {
		top = -1;
	}

	STACK(int studentId, string name, string school, int top = -1) {
		mStudentId = studentId;
		mName = name;
		mSchool = school;
	}
	~STACK(){}
};

int main(void) {

	STACK studentStack[20];

	return 0;
}