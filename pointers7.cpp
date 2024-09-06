// Pointers and Classes
#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int a, int b) : x(a), y(b) {}

    void display() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Dynamically allocate memory for a Point object
    Point* p = new Point(5, 10);
    
    // Access the display function using the pointer
    p->display();

    // Free the dynamically allocated memory
    delete p;

    return 0;
}

