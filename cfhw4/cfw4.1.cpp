#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int y;
void num() {
	if (y > 0) {
		for (int x = 0; x <= 9; x++)
		{
			y--;
			printf("%d\n", y);
		}
	}
	else
	{
		printf("Error");
	}
}
void triangle(int a) {
	for (int i = 1; i <= y; i++) {
		for (int a = y; a >= i; a--) {
			printf("* ");
		}
		printf("\n");
	}
}
int main() {
	scanf("%d", &y);
	num();
	printf("\n");
	triangle(y);
}
