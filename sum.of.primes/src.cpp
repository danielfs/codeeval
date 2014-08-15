#include <iostream>
#include <math.h>

using namespace std;

// Baseada na implementacao em python do site http://en.wikipedia.org/wiki/Primality_test
bool isPrime( int n ) {
	if( n <= 3 ) {
		if( n <= 1 ) return false;
		return true;
	}
	
	if( n % 2 == 0 || n % 3 == 0 ) {
		return false;
	}
	
	int squareRoot = sqrt( n );
	
	for( int i = 5; i <= squareRoot + 1; i += 6 ) {
		if( n % i == 0 || n % ( i + 2 ) == 0 ) {
			return false;
		}
	}
	
	return true;
}

int main() {

	int count = 0, i = 1;
	long sum = 0;
	
	while( count < 1000 ) {
		if( isPrime( i ) ) {
			sum += i;
			count += 1;
		}
		
		i += 1;
	}
	
	cout << sum << endl;
	
	return 0;
}
