Here is the c++ code implementation for this lab:

```cpp
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
