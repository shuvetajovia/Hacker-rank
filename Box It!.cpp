
class Box {
private:
    int l, b, h;  // Dimensions of the box

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // Copy constructor
    Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

    // Getters
    int getLength() { return l; }  // Return box's length
    int getBreadth() { return b; } // Return box's breadth
    int getHeight() { return h; }  // Return box's height

    // Calculate volume of the box
    long long CalculateVolume() {
        return static_cast<long long>(l) * b * h;
    }

    // Overload < operator
    bool operator<(Box& B) {
        if (l < B.l) return true;
        if (l == B.l && b < B.b) return true;
        if (l == B.l && b == B.b && h < B.h) return true;
        return false;
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

