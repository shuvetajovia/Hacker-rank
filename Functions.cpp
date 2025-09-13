#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int max_num = max(max(a, b), max(c, d));

    cout << max_num << endl;

    return 0;
}
