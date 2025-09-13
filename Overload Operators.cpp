#include <iostream>
using namespace std;

class Complex {
public:
    int a, b;

    // Overload + operator
    Complex operator + (const Complex& other) {
        Complex result;
        result.a = this->a + other.a;
        result.b = this->b + other.b;
        return result;
    }

    // Overload >> operator to parse input like "3+i4"
    friend istream& operator >> (istream &in, Complex &c);

    // Overload << operator to output as "a+ib"
    friend ostream& operator << (ostream &out, const Complex &c);
};

// Input operator >>
istream& operator >> (istream &in, Complex &c) {
    string temp;
    in >> temp;  // Read the whole "3+i4" as a string
    size_t pos = temp.find('+');  // Find '+'
    c.a = stoi(temp.substr(0, pos));  // Extract real part
    c.b = stoi(temp.substr(pos + 2)); // Extract imaginary part after 'i'
    return in;
}

// Output operator <<
ostream& operator << (ostream &out, const Complex &c) {
    out << c.a << "+i" << c.b;
    return out;
}

int main() {
    Complex c1, c2;
    cin >> c1 >> c2;  // Now this will correctly parse "3+i4"
    Complex c3 = c1 + c2;
    cout << c3 << endl;
    return 0;
}
