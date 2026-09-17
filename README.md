# CPP
# Circular String Eliminator 🔄

A simple C++ program that implements a circular elimination algorithm. The logic is inspired by the classic **Josephus Problem** and the childhood **FLAMES** game, where characters are eliminated one by one in a circular fashion based on a specific count, leaving only one survivor.

## 📝 Description
The program takes two strings as input. The length of the second string acts as the "elimination count" (`n`). It then circularly iterates through the first string, eliminating every `n-th` character until only one single character remains.

## 🚀 How It Works
1. User inputs the main string.
2. User inputs the secondary string.
3. The program calculates the length of the secondary string to set the elimination step.
4. It iterates circularly over the main string, shifting characters to delete the target character.
5. Outputs the final surviving character.

## 💻 Environment & Setup
This code is originally written using classic Turbo C++ syntax (`<iostream.h>`, `<conio.h>`, `void main()`). It can be compiled directly in a Turbo C++ IDE.

**For Modern C++ Users (VS Code, MinGW, Dev C++):**
To compile this on a modern compiler, simply replace the header section with standard C++ headers:
```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Paste the logic here
    return 0;
}
## 💡 Example Output
```text
enter a string : ABCD
enter a 2nd string : XY
last character : A


enter a string : ABCDenter a 2nd string : XY
last chara
