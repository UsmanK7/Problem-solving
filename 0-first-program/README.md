# First Program in C++

C++ is a powerful, high-performance programming language often used for system-level programming, game development, and competitive programming. Here's a step-by-step guide to writing and understanding your first C++ program.

## Structure of a Simple C++ Program

A basic C++ program typically follows this structure:

1. **Preprocessor Directives**: Includes necessary libraries.
2. **Main Function**: The entry point of the program.
3. **Code Block**: Contains the program logic.



### Example: Hello World Program

```cpp
#include <iostream> // Preprocessor directive for input/output operations.

int main() {
    std::cout << "Hello, World!" << std::endl; // Output to the console.
    return 0; // Indicate successful program termination.
}

```


# Using `namespace std` in C++

## What is a Namespace?
A namespace is a feature in C++ used to organize code and avoid name conflicts. The `std` namespace contains all the standard C++ library functions and objects (e.g., `cout`, `cin`, `string`, etc.).

---

## Using `using namespace std;`

When you include the line `using namespace std;`, you don't need to prefix standard library features with `std::`. Here's an example:

### When we use `using namespace std;`
```cpp
#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" <<endl;
    return 0;
}
