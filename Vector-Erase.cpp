#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, a, b;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }

    int pos;
    cin >> pos;
    v.erase(v.begin() + (pos - 1)); // Adjusting for 0-based indexing

    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1)); // Adjusting for 0-based indexing

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
