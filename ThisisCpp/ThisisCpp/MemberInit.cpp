#include <iostream>
using namespace std;

class CTest {
public:
	int m_nData;

	CTest(){
		m_nData = 10;
		cout << "CTest() 생성자 함수 시작" << endl;
	}

	void PrintData(void);

};

void CTest::PrintData(void) {
	cout << m_nData << endl;
}

int main() {
	CTest t;
	cout << "main() 함수 시작" << endl;
	t.PrintData();

	cout << "main() 함수 종료" << endl;
	return 0;
}