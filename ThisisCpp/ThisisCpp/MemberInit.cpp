#include <iostream>
using namespace std;

class CTest {
public:
	int m_nData;

	CTest(){
		m_nData = 10;
		cout << "CTest() ������ �Լ� ����" << endl;
	}

	void PrintData(void);

};

void CTest::PrintData(void) {
	cout << m_nData << endl;
}

int main() {
	CTest t;
	cout << "main() �Լ� ����" << endl;
	t.PrintData();

	cout << "main() �Լ� ����" << endl;
	return 0;
}