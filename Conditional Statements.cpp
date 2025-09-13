#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9)
        cout << words[n - 1] << endl; // Array index starts from 0
    else
        cout << "Greater than 9" << endl;

    return 0;
}
