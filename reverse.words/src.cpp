#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void printString( string text ) {
	stringstream ss( text );
	vector<string> vs;
	string word;
	
	while( getline( ss, word, ' ' ) ) {
		vs.push_back( word );
	}
	
	vector<string>::reverse_iterator it = vs.rbegin();
	cout << *it;
	it++;
	
	for( ; it != vs.rend(); it++ ) {
		cout << " " << *it;
	}
	
	cout << endl;
}

int main() {
	
	string line;
	
	while( getline( cin, line ) ) {
		printString( line );
	}

	return 0;
}
