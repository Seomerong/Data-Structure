#include<stdio.h>
int fact(int);
void main() {
	for (int i = 1;i<=4; i++) {
		printf("%d != %d\n", i, fact(i));
	}
	printf("fact(5)=%d\n", fact(5));
}

int fact(int n) {
	if (n <= 1) return 1;
	else return n*fact(n - 1);
}