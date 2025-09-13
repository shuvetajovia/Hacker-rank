#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str) {
    vector<int> integers;
    stringstream ss(str);
    int number;
    char ch;

    while (ss >> number) {
        integers.push_back(number);
        ss >> ch;  // Discard the comma
    }

    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
