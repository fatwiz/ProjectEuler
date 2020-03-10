#include <stdio.h>
#include <math.h>

long int minPrime = 7;

int isPrime(int prime) {
	for(int i=3; i<prime; i++) {
		if( !(prime%i )) {
			return 0;
		}
	}
	return 1;
}

void biggestPrime( long int product ) {
	int sqrtProduct = (int) sqrt(product);
	for( int n = minPrime; n<sqrtProduct; n+=2 ) {
		if( !(product % n) ) {
			if( isPrime(n)){
				printf("%d ", n);
			}
		}
	}
}

int main() {
	biggestPrime( 600851475143 );
	return 0;
}

