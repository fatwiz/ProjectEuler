#include <stdio.h>

int fibSum = 2;
int fibA = 1;
int fibB = 2;

void fibonacci() {
	fibB = fibA + fibB;
	fibA = fibB-fibA;

	if( fibB % 2 == 0 ) {
		fibSum += fibB;
	}
}

int main() {
	while(fibB < 4000000) {
		fibonacci();
	}
	printf("Sum is : %d\n", fibSum);
	return 0;
}
