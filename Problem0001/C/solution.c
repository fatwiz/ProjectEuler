#include <stdio.h>

int sum35( int n ) {
	int sum = 0;
	for( int i=0; i<n; ++i ){
		if( !( i%3 ) || !( i%5 ) ){
			sum +=i;
		}
	}
	return sum;
}

int main() {
	printf( "Sum is: %d\n", sum35( 1000 ) );
	return 0;
}
