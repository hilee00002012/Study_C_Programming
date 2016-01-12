#include "stdio.h"

int main() {
	int inputNum, i = 0, num, sum = 0;

	printf("input num : ");
	scanf("%d", &inputNum);

	while(i < inputNum) {
		printf("[%d] : ", i+1);
		scanf("%d", &num);

		sum = sum + num;
		i++;
	}

	float avg = (float)sum / inputNum;
	printf("sum = %d, input = %d, avg = %f", sum, inputNum, avg);

	return 0;
}