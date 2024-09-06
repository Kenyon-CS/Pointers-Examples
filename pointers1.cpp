// Pointer Basics
#include <iostream>

int main() {
    // Declare an integer variable
    int num = 10;
    
    // Declare a pointer variable that will store the address of num
    int* ptr = &num;
    
    // Output the address stored in the pointer
    std::cout << "The address of num is: " << ptr << std::endl;
    
    // Output the value of num using the pointer
    std::cout << "The value of num using pointer dereferencing: " << *ptr << std::endl;

    // Modify the value of num using the pointer
    *ptr = 20;
    
    // Output the new value of num after modification through the pointer
    std::cout << "The new value of num is: " << num << std::endl;

    return 0;
}
