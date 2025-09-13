#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;  // Read number of arrays and number of queries
    
    vector<vector<int>> arr(n);  // Create vector of vectors

    // Read n arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;  // Read size of array i
        arr[i].resize(k);  // Resize vector to store k elements

        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];  // Read k elements
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;  // Read query indices
        cout << arr[a][b] << endl;  // Output the required element
    }

    return 0;
}
