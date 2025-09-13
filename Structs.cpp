#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student student;

    // Input student details
    cin >> student.age;
    cin >> student.first_name;
    cin >> student.last_name;
    cin >> student.standard;

    // Output student details
    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard;

    return 0;
}
