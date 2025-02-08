# Stack Implementation Using Linked List in C++

This repository contains an implementation of a **Stack** using a **custom linked list** in C++. No built-in data structures like `std::stack` are used; instead, the stack operations are implemented manually with a linked list.

## Features
- **Print**: Prints all elements in the stack.
- **Push**: Adds an element to the top of the stack.
- **Top**: Retrieves the top element of the stack.
- **Bottom**: Retrieves the bottom element of the stack.
- **Size**: Returns the size of the stack.
- **IsEmpty**: Checks if the stack is empty.
- **Pop**: Removes an element from the top of the stack.
- **GetItem**: Retrieves an element at a specific index.
- **Reverse**: Reverses the stack order.
- **UpdateItem**: Updates the value of an element at a specific index.
- **InsertAfter**: Inserts an element after a specific index.
- **InsertAtFront**: Inserts an element at the top of the stack.
- **InsertAtBack**: Inserts an element at the bottom of the stack.
- **Clear**: Removes all elements from the stack.

## Getting Started
### Prerequisites
- A C++ compiler (GCC, MSVC, Clang, etc.)

### Compilation & Execution
To compile and run the program, use the following commands:
```sh
 g++ main.cpp -o stack
 ./stack
```

## Example Usage
```cpp
clsStack<int> myStack;
myStack.Push(10);
myStack.Push(20);
myStack.Push(30);
myStack.Print(); // Output: 30 20 10
myStack.Pop();
myStack.Print(); // Output: 20 10
```

## License
This project is licensed under the MIT License.

