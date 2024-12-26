# Loops in C++

## What is a Loop?

A **loop** is a control structure in C++ that allows you to execute a block of code repeatedly until a specific condition is met. Loops are essential for automating repetitive tasks and optimizing code efficiency.

---

## Types of Loops in C++

1. **`for` Loop**: Best suited for situations where the number of iterations is known beforehand.
2. **`while` Loop**: Used when the condition must be evaluated before each iteration.
3. **`do-while` Loop**: Ensures the code is executed at least once since the condition is evaluated after the iteration.

---

## 1. `for` Loop

The `for` loop is a concise and powerful way to execute a block of code a specific number of times.

### Syntax:
```cpp
for (initialization; condition; update) {
    // Code to execute
}


## 2. `while` Loop

The `while` loop evaluates a condition before executing the code block. It continues looping as long as the condition remains true.

### Syntax:
```cpp
while (condition) {
    // Code to execute
}
```

## 3. do-while Loop
The do-while loop executes the code block at least once, regardless of the condition, because the condition is checked after the execution.

### Syntax:
```cpp

do {
    // Code to execute
} while (condition);
```

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Iteration: " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}
```


# Nested Loops
A loop inside another loop is called a nested loop. It is commonly used for multidimensional operations like matrices.

### Example:
```
cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
```
### Output:
```
i = 1, j = 1
i = 1, j = 2
i = 2, j = 1
i = 2, j = 2
i = 3, j = 1
i = 3, j = 2
```


# Infinite Loops
An infinite loop runs indefinitely when the termination condition is never satisfied. It is usually caused by a logical error but can be intentionally used for certain scenarios.

# Example:
```
cpp
#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "This is an infinite loop." << endl;
    }
    return 0;
}
```

### Control Statements in Loops
1. break Statement
Exits the loop immediately, regardless of the loop condition.

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        cout << "Iteration: " << i << endl;
    }
    return 0;
}
```

### Output:
```
Iteration: 1
Iteration: 2
```

1. continue Statement
Skips the current iteration and proceeds to the next iteration.

### Example:
```cpp

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << "Iteration: " << i << endl;
    }
    return 0;
}
```
### Output:
```
Iteration: 1
Iteration: 2
Iteration: 4
Iteration: 5
```