/*
* https://devkoboso.com/entry/Loop-2
특별문제
1번 출력
1
12
123
1234
123
12
1

*/

#include<stdio.h>
void main() {
	/*
	* * for 문을 활용한 방법
	* 	for (int _inumber0 = 1; _inumber0 < 5; _inumber0++) {
		for (int _inumber1 = 1; _inumber1 <= _inumber0; _inumber1++) {
			printf("%d", _inumber1);
		}
		printf("\n");
	}
	for (int _inumber2 = 3; _inumber2 >= 1; _inumber2--) {
		for (int _inumber3 = 1; _inumber3 <= _inumber2; _inumber3++) {
			printf("%d", _inumber3);
		}
		printf("\n");
	}
	*/
	int i = 1;
	while (i < 5) {
		int j = 1;
		while (j <= i) {
			printf("%d", j);
			j++;
		}
		i++;
		printf("\n");
	}

	i = 3;
	while (i >= 1) {
		int k = 1;
		while (k <= i) {
			printf("%d", k);
			k++;
		}
		i--;
		printf("\n");
	}
	fgetc(stdin);
}

