#include <iostream>
using namespace std;

// Global variable
int var = 100;

// Namespace declaration
namespace FirstSpace {
    int var = 1;

    void display() {
        cout << "Inside FirstSpace, var = " << var << endl;
    }
}

namespace SecondSpace {
    int var = 2;

    void display() {
        cout << "Inside SecondSpace, var = " << var << endl;
    }
}

// Function defined outside a class using scope resolution
class Sample {
public:
    void show();
};

void Sample::show() {
    cout << "Inside Sample::show() function." << endl;
}

int main() {
    int var = 10;  // Local variable

    cout << "Local var = " << var << endl;

    // Access global variable using scope resolution
    cout << "Global var = " << ::var << endl;

    // Access functions inside namespaces
    FirstSpace::display();
    SecondSpace::display();

    // Call class function defined outside using scope resolution
    Sample obj;
    obj.show();

    return 0;
}
