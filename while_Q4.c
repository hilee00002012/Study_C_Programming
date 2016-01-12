#include "stdio.h"

int main() {
	int num1, num2 = 9;

	printf("input num : ");
	scanf("%d", &num1);

	while(num2 > 0) {
		printf("%d * %d = %d\n", num1, num2, num1*num2);
		num2--;
	}

	return 0;
}