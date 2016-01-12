#include "stdio.h"

int main() {
	int input, sum = 0;

	while(input != 0) {
		printf("입력 : ");
		scanf("%d", &input);

		sum = sum + input;
		printf("sum = %d\n", sum );
	}

	printf("total sum = %d\n", sum );

	return 0;
}