# Functions in C++

## What is a Function?
A function is a block of code that performs a specific task. Functions allow us to break the program into smaller, manageable pieces. C++ supports both built-in and user-defined functions.

## Syntax of a Function
The syntax of a function includes the return type, function name, parameters (if any), and the body of the function.

```cpp
return_type function_name(parameters) {
    // function body
    // statements
    return value; // return value if return_type is not void
}
```

- **return_type**: Specifies the type of value the function returns. If it doesn't return any value, use `void`.
- **function_name**: The name of the function.
- **parameters**: (Optional) A list of parameters passed into the function.
- **body**: Contains the statements that define what the function does.


## Types of Functions
1. **Built-in Functions**
These functions are predefined in C++ and are available for use. Examples include cout, cin, sqrt, etc.

2. **User-defined Functions**
These are functions defined by the user to perform specific tasks.

3. **Void Functions**
These functions do not return a value. The return type is void.

### Example:
```
#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello, World!" << endl;
}

int main() {
    printMessage(); // Calling the function
    return 0;
}

```
4. **Functions with Return Value**
Functions can return a value using the return statement.

### Example:
```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // Calling the function
    cout << "The sum is: " << result << endl;
    return 0;
}

```

# Function Declaration and Definition
- **Function Declaration (Prototype)**: Declaring the function before using it in the main() function.

```cpp

return_type function_name(parameters);
```
- **Function Definition**: Defining the function body that contains the actual implementation of the function.

```cpp
return_type function_name(parameters) {
    // function body
}
```
# Function Overloading
In C++, function overloading allows multiple functions with the same name but different parameter types or numbers. The compiler differentiates between these functions based on the number and type of arguments.

### Example:

```cpp

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;         // Calls the int version
    cout << add(3.5, 4.5) << endl;     // Calls the double version
    return 0;
}
```

# Function Arguments
Functions in C++ can accept different types of arguments.

- **Call by Value**: The value of the argument is passed to the function.
- **Call by Reference**: The address (reference) of the argument is passed to the function.

## Call by Value:
Changes made to the parameter inside the function do not affect the original argument.

```cpp
#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 10;  // This change won't affect the original variable
}

int main() {
    int a = 5;
    modifyValue(a);
    cout << "a after function call: " << a << endl; // Output will be 5
    return 0;
}
```
## Call by Reference:
Changes made to the parameter inside the function will affect the original argument.

```cpp
#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10;  // This change will affect the original variable
}

int main() {
    int a = 5;
    modifyValue(a);
    cout << "a after function call: " << a << endl; // Output will be 10
    return 0;
}
```