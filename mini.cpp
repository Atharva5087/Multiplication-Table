#include <stdio.h>

int main() {
	int num, mul;
	
	printf("Input a number :");
	scanf("%d", &num);
	
	for(int i = 1; i <= 10; i++) {
		mul = num * i;
		printf("%d \n", mul);
	}
	
	return 0;
}
