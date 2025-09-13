#include <iostream>
#include <iomanip>  // << You missed this!
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while (T--) {
        double A, B, C;
        cin >> A >> B >> C;

        // 1. Hexadecimal output for A (no padding, no alignment)
        cout << "0x" << nouppercase << hex << (long long)A << endl;

        // 2. Fixed point output for B (width 15, '_' padding, + sign)
        cout << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;

         // Reset showpos flag before printing C
        cout << noshowpos;

        // 3. Scientific output for C (9 decimal places, uppercase E, no + sign)
        cout << scientific << uppercase << setprecision(9) << C << endl;

        // Reset all flags for next iteration
        cout << dec << setfill(' ') << defaultfloat;
    }
    return 0;
}
