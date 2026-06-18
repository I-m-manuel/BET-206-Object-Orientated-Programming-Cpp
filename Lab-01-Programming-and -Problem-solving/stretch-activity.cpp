#include <iostream>
#include <string>
#include <algorithm> // Required for transform()

using namespace std;

int main() {
    string x;
    getline(cin, x);

    // STRETCH: Convert the entire string to lowercase to make it case-insensitive
    // ::tolower converts each individual character to lowercase
    transform(x.begin(), x.end(), x.begin(), ::tolower);

    // Now we compare against the completely lowercase version "hello"
    if (x == "hello") {
        cout << "Hello";
    } else {
        cout << "Goodbye!";
    }
    
    return 0;
}
