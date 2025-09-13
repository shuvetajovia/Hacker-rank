#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Setters
    void set_age(int a) {
        age = a;
    }

    void set_first_name(string fn) {
        first_name = fn;
    }

    void set_last_name(string ln) {
        last_name = ln;
    }

    void set_standard(int s) {
        standard = s;
    }

    // Getters
    int get_age() {
        return age;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    int get_standard() {
        return standard;
    }

    // to_string method
    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    Student student;
    int age, standard;
    string first_name, last_name;

    // Input student details
    cin >> age >> first_name >> last_name >> standard;

    // Setting values using setter methods
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);

    // Printing values using getter methods
    cout << student.get_age() << "\n";
    cout << student.get_last_name() << ", " << student.get_first_name() << "\n";
    cout << student.get_standard() << "\n";
    cout<<"\n";
    cout << student.to_string() << "\n";

    return 0;
}
