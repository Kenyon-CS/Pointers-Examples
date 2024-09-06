// Passing Pointers to Functions
#include <iostream>

// Function to swap two numbers using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    
    // Call swap by passing pointers to x and y
    swap(&x, &y);
    
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
