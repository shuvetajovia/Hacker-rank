#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int q, type, marks;
    string name;
    cin >> q;

    map<string, int> m;

    for (int i = 0; i < q; ++i) {
        cin >> type >> name;

        if (type == 1) {
            cin >> marks;
            m[name] += marks;
        } else if (type == 2) {
            m.erase(name);
        } else if (type == 3) {
            cout << m[name] << endl;
        }
    }
    return 0;
}



