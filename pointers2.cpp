// Pointers with arrays
#include <iostream>

int main() {
    // Declare an array of integers
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Declare a pointer and point it to the first element of the array
    int* ptr = arr;
    
    // Output the array values using pointer dereferencing
    for (int i = 0; i < 5; i++) {
        std::cout << "Value at index " << i << " is: " << *(ptr + i) << std::endl;
    }

    return 0;
}
