#include<stdio.h>

typedef struct USERDATA {
	int nAge;
	char szName[32];

} USERDATA;


int main(void) {

	USERDATA user = { 25, "�迵��" };
	printf("%d, %s\n", user.nAge, user.szName);

	return 0;
}