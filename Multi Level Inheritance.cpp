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
};

class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle" << endl;
    }
};

int main() {
    Equilateral eq;
    eq.equilateral();  // I am an equilateral triangle
    eq.isosceles();    // I am an isosceles triangle
    eq.triangle();     // I am a triangle
    return 0;
}
