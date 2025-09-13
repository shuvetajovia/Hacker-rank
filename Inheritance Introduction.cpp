#include <iostream>
using namespace std;

class Triangle {
    public:
        void triangle() {
            cout << "I am a triangle" << endl;
        }
};

class Isosceles : public Triangle {
    public:
        void isosceles() {
            cout << "I am an isosceles triangle" << endl;
        }

        // New function to print the desired output
        void description() {
            cout << "In an isosceles triangle two sides are equal" << endl;
        }
};

int main() {
    Isosceles isc;
    isc.isosceles();    // Output: I am an isosceles triangle
    isc.description();  // Output: In an isosceles triangle two sides are equal
    isc.triangle();     // Output: I am a triangle
    return 0;
}
