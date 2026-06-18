/* check if a string is equal to "Hello" */

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string x;
	getline(cin, x);
	if (x == "Hello") {
		cout << "Hello";
	} else {
		cout << "Goodbye!";
	}
	
	
	
	return 0;
	
	
	
}
