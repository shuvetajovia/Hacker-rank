#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Print lengths of both strings
    cout << a.size() << " " << b.size() << endl;

    // Print concatenated string
    cout << a + b << endl;

    // Swap first characters
    swap(a[0], b[0]);

    // Print the modified strings
    cout << a << " " << b << endl;

    return 0;
}
