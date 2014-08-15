#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;

// Esta funcao foi extraida do artigo http://www.cplusplus.com/articles/D9j2Nwbp/
template <typename T>
string NumberToString ( T Number )
{
	ostringstream ss;
	ss << Number;
	return ss.str();
}

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

bool isPalindrome( string s ) {
	int end      = s.size() - 1;
	int loopSize = s.size() / 2;
	
	for( int begin = 0; begin < loopSize; ) {
		if( s[ begin ] != s[ end ] ) return false;
		begin += 1;
		end -= 1;
	}
	
	return true;
}

int main() {
	int n = 929;
	
	if( isPrime( n ) ) {
		string s = NumberToString( n );
		
		if( isPalindrome( s ) ) {
			cout << s << endl;
		}
	}

	return 0;
}
