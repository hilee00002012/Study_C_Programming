#include "stdio.h"

int main() {
	int num1, num2 = 9, result;

	printf("양의 정수 하나를 입력하세요 : ");
	scanf("%d", &num1);

	while(num2 == 0) {
		result = num1 * num2;
		printf("%d * %d = %d", num1, num2, result);
		num2--;
	}

	return 0;
}