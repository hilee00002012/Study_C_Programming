#include "stdio.h"

int main() {
	int input, i = 1, num3 = 3;

	printf("양의 정수 하나를 입력하세요 : ");
	scanf("%d", &input);

	while(i < input + 1) {
		int result = i * num3;

		printf("%d\n", result);
		i++;
	}

	return 0;
}