#include <iostream>
#include <deque>
using namespace std;

void printMaxInSubarrays(int arr[], int N, int K) {
    deque<int> dq;

    for (int i = 0; i < N; ++i) {
        // Remove indices that are out of this window
        while (!dq.empty() && dq.front() <= i - K)
            dq.pop_front();

        // Remove indices whose corresponding values are less than arr[i]
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        // Add current index
        dq.push_back(i);

        // Window is valid from index K-1 onwards
        if (i >= K - 1)
            cout << arr[dq.front()] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        printMaxInSubarrays(A, N, K);
    }
    return 0;
}
