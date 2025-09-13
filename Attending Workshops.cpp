#include <iostream>
#include <algorithm>
using namespace std;

struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshop* workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops;
    aw->n = n;
    aw->workshops = new Workshop[n];

    for (int i = 0; i < n; ++i) {
        aw->workshops[i].start_time = start_time[i];
        aw->workshops[i].duration = duration[i];
        aw->workshops[i].end_time = start_time[i] + duration[i];
    }

    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int n = ptr->n;
    Workshop* arr = ptr->workshops;

    // Sort workshops by end time
    sort(arr, arr + n, [](const Workshop &a, const Workshop &b) {
        return a.end_time < b.end_time;
    });

    int count = 0;
    int current_end_time = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i].start_time >= current_end_time) {
            ++count;
            current_end_time = arr[i].end_time;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    int* start_time = new int[n];
    int* duration = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> duration[i];
    }

    Available_Workshops* workshops = initialize(start_time, duration, n);
    int max_workshops = CalculateMaxWorkshops(workshops);

    cout << max_workshops << endl;

    // Cleanup
    delete[] workshops->workshops;
    delete workshops;
    delete[] start_time;
    delete[] duration;

    return 0;
}

