/*ÞÔÓ, ÈÊÒÈÁ, ÌÎÏ ÝÂÌ
Ïðîãðàììèðîâàíasdggèå è îñíîâû òåîðèè àëãîðèòìîâ
Ëàáà 6.1asd
ÊÒáî1-6,åëîâ Èãîðü Àëåêñàíäðîâè÷adasd
ÇàäàíAasdsdf
15.2023sdfs132*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int N, Res[256], * ptr1 = NULL, * ptr2 = NULL, i, j;
	char c;
	i = j = 0;

	scanf("%d", &N);

	ptr1 = (char*)calloc(N, sizeof(int));
	ptr2 = (char*)calloc(N, sizeof(int));

	if (!ptr1 || !ptr2) {
		exit(1);
	}
	for (int k = 0; k <= N; k++) {
		Res[k] = -1;
	}

	do {
		scanf("%d%c", ptr1 + i, &c);
		i++;
	} while (c != '\n');
	do {
		scanf("%d%c", ptr2 + j, &c);
		j++;
	} while (c != '\n');

	for (int k = 0; k < i; k++) {
		Res[*(ptr1 + k)] = 1;
	}

	for (int k = 0; k < j; k++) {
		if (Res[*(ptr2 + k)] == -1) {
			Res[*(ptr2 + k)] = 0;
		}
		else if (Res[*(ptr2 + k)] == 1) {
			Res[*(ptr2 + k)] = 2;
		}
	}

	for (int k = 1; k <= N; k++) {
		if (Res[k] == 2) {
			printf("%d ", k);
		}
	}
	printf("\n");
	for (int k = 1; k <= N; k++) {
		if (Res[k] == -1) {
			printf("%d ", k);
		}
	}
	printf("\n");

	free(ptr1);
	free(ptr2);

	return 0;
}
