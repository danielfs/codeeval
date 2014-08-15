#include <iostream>

using namespace std;

bool isDivisible( int a, int b ) {
	return a % b == 0;
}

void printNumber( int i, int a, int b ) {
	bool isDivisibleByA = isDivisible( i, a );
	bool isDivisibleByB = isDivisible( i, b );
	
	if( isDivisibleByA && isDivisibleByB ) {
		cout << "FB";
	}
	else if( isDivisibleByA ) {
		cout << "F";
	}
	else if( isDivisibleByB ) {
		cout << "B";
	}
	else {
		cout << i;
	}
}

void printSequence( int a, int b, int n ) {
	
	printNumber( 1, a, b );
	
	for( int i = 2; i <= n; i++ ) {
		cout << " ";
		printNumber( i, a, b );
	}
	
	cout << endl;

}

int main() {
	int a, b, n;

	while( cin >> a >> b >> n ) {
		printSequence( a, b, n );
	}

	return 0;
}
