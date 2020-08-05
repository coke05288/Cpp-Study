#include<iostream>
#include<string>
using namespace std;

int main(void) {

	int nAge;
	cout << "나이를 입력하세요" << endl;

	cin >> nAge;

	char szJob[32];
	cout << "직업을 입력하세요" << endl;

	cin >> szJob;

	string strName;
	cout << "이름을 입력하세요" << endl;

	cin >> strName;

	cout << nAge << " " << szJob << " " << strName << " " << endl;

	return 0;
}