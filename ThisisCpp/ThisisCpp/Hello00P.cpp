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

	USERDATA user = { 25, "±è¿µÁØ" };

	user.Print();

	return 0;
}