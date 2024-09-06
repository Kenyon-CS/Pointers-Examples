// Pointers to functions
#include <iostream>

// A simple function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a pointer to the add function
    int (*funcPtr)(int, int) = &add;

    // Call the function using the pointer
    int result = funcPtr(5, 10);

    // Output the result
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
