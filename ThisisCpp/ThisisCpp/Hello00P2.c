#include<stdio.h>

typedef struct USERDATA {
	int nAge;
	char szName[32];
} USERDATA;

void PrintData(USERDATA* pUser) {
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

int maint(void) {

	USERDATA user = { 24, "±è¿µÁØ" };

	PrintData(&user);

	return 0;
}