#include "stdio.h"

int main() {
	int input, i = 0;

	printf("양의 정수 하나를 입력하세요 : ");
	scanf("%d", &input);

	while(i < input) {
		printf("Hello world!\n");
		i++;
	}

	return 0;
}