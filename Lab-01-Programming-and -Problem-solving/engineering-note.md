# Engineering Note: String Comparison Program

## Technical Overview
This program captures user input as a full line of text, stores it in a string variable, and performs a conditional check to determine if the input matches a specific target string (`"Hello"`). 

## Component Breakdown

### 1. Libraries Used
* `<iostream>`: Utilized for standard input/output streams (`cin` and `cout`).
* `<string>`: Utilized to handle the `std::string` data type and related manipulation functions.

### 2. Input Handling
Instead of using standard `cin >> x;` (which stops reading at the first space), this program uses `getline(cin, x);`. This ensures that if a user inputs spaces, the entire line is safely captured and evaluated.

### 3. Logic and Control Flow
The program relies on a simple binary selection structure (`if-else` statement).
* **Condition:** Evaluates if the memory contents of string `x` are an exact character-by-character match to the string literal `"Hello"`.
* **Case Sensitivity:** The comparison operator (`==`) evaluates exact ASCII values, meaning inputs like `"hello"` or `"HELLO"` will fail the condition and branch to the `else` block.

## Complexity Analysis
* **Time Complexity:** $O(n)$ where $n$ is the length of the input string, as the program must read the characters and compare them.
* **Space Complexity:** $O(n)$ to store the characters of the input string in memory.
