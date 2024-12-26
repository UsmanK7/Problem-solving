# Variables in C++

## What is a Variable?

A variable is a named memory location used to store data that can be modified during program execution. In C++, variables must be declared with a specific data type that determines the type of data the variable can hold and the amount of memory it occupies.

---

## Common Data Types and Their Sizes

Here is a list of common data types in C++ and their typical sizes (sizes may vary depending on the system architecture):

| **Data Type** | **Size**        | **Range**                             |
|---------------|-----------------|---------------------------------------|
| `char`        | 1 byte          | -128 to 127 (or 0 to 255, unsigned)  |
| `int`         | 4 bytes         | -2,147,483,648 to 2,147,483,647      |
| `float`       | 4 bytes         | ±3.4e-38 to ±3.4e+38                 |
| `double`      | 8 bytes         | ±1.7e-308 to ±1.7e+308               |
| `bool`        | 1 byte          | `true` (1) or `false` (0)            |
| `long`        | 4 or 8 bytes    | System-dependent                     |
| `long long`   | 8 bytes         | -9e+18 to 9e+18                      |
| `unsigned`    | Depends on type | Always positive                      |

---

## Declaring and Initializing Variables

You can declare and initialize variables in C++ as follows:

```cpp
#include <iostream>

int main() {
    int age = 22;               // Integer variable
    float height = 5.9;         // Floating-point variable
    char grade = 'A';           // Character variable
    bool isStudent = true;      // Boolean variable

    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << isStudent << std::endl;

    return 0;
}
