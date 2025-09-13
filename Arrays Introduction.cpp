#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;  // Read the number of elements
    
    int arr[n];  // Declare an array of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read array elements
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";  // Print elements in reverse order
    }  
    return 0;
}
