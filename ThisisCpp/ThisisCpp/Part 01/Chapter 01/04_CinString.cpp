#include<iostream>
#include<string>
using namespace std;

int main(void) {

	int nAge;
	cout << "���̸� �Է��ϼ���" << endl;

	cin >> nAge;

	char szJob[32];
	cout << "������ �Է��ϼ���" << endl;

	cin >> szJob;

	string strName;
	cout << "�̸��� �Է��ϼ���" << endl;

	cin >> strName;

	cout << nAge << " " << szJob << " " << strName << " " << endl;

	return 0;
}