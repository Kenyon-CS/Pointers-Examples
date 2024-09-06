// Memory Allocation
#include <iostream>

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int;
    
    // Assign a value to the dynamically allocated memory
    *ptr = 25;

    // Output the value
    std::cout << "Dynamically allocated value: " << *ptr << std::endl;
    
    // Free the allocated memory
    delete ptr;

    return 0;
}
