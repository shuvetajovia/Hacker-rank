#include <iostream>
#include <string>
using namespace std;

enum class Color { red, green, orange };
enum class Fruit { apple, orange, pear };

template <typename T>
struct Traits {
    static string name(int index) {
        return "unknown";
    }
};

// Specialization for Color
template <>
struct Traits<Color> {
    static string name(int index) {
        switch (index) {
            case 0: return "red";
            case 1: return "green";
            case 2: return "orange";
            default: return "unknown";
        }
    }
};

// Specialization for Fruit
template <>
struct Traits<Fruit> {
    static string name(int index) {
        switch (index) {
            case 0: return "apple";
            case 1: return "orange";
            case 2: return "pear";
            default: return "unknown";
        }
    }
};

int main() {
    int t, colorIndex, fruitIndex;
    cin >> t;
    for (int i = 0; i != t; ++i) {
        cin >> colorIndex >> fruitIndex;
        cout << Traits<Color>::name(colorIndex) << " ";
        cout << Traits<Fruit>::name(fruitIndex) << endl;
    }
    return 0;
}
