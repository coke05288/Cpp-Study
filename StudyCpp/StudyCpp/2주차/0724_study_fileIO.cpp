#include<iostream>
#include<fstream>
#include<istream>
#include<ostream>
#include<string>

// �߰� �н� �ʿ�
using namespace std;

int main(void) {

	string input_line;
	ofstream out("./test.txt");

	for (int i = 0; i < 10; i++) {
		cin >> input_line;
		out << input_line << endl;
	}

	out.close();

	return 0;
}