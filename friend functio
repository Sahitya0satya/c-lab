#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Declare friend function
    friend int calculateArea(Rectangle r);
};

// Friend function definition
int calculateArea(Rectangle r) {
    // Access private members
    return r.length * r.width;
}

int main() {
    // Create object
    Rectangle rect(10, 5);

    // Call friend function
    int area = calculateArea(rect);

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}
