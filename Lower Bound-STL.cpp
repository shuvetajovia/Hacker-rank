#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q, x;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    cin >> q;
    while(q--) {
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        int index = it - v.begin(); // 0-based index

        if (it != v.end() && *it == x) {
            cout << "Yes " << index + 1 << endl;
        } else {
            cout << "No " << index + 1 << endl;
        }
    }
 
    return 0;
}
