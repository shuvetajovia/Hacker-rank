#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /*Enter your code here. Read input from STDIN. Print output to STDOUT */

    unsigned int N, S, P, Q, mod, prev;

    cin >> N >> S >> P >> Q;

    mod = pow(2, 31);
    prev = S;
    int numDistinct = 1;

    for (int i = 1; i < N; i++)
    {
        S = (S *P + Q) % mod;
        numDistinct += (S != prev) ? 1 : 0;
        prev = S;
    }

    cout << numDistinct;

    return 0;
}

