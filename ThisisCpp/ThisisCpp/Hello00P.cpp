#include <cstdio>

class USERDATA {
public:
	int nAge;
	char szName[32];

	void Print(void) {
		printf("%d, %s\n", nAge, szName);
	}
};

int main(void) {

	USERDATA user = { 25, "�迵��" };

	user.Print();

	return 0;
}