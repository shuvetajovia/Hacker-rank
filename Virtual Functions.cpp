
// Base class Person
class Person {
public:
    string name;
    int age;

    // Virtual functions for polymorphism
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

// Derived class Professor
class Professor : public Person {
public:
    int publications;
    int cur_id;
    static int professor_id;

    Professor() {
        cur_id = ++professor_id;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

// Initialize static member for Professor
int Professor::professor_id = 0;

// Derived class Student
class Student : public Person {
public:
    int marks[6];
    int cur_id;
    static int student_id;

    Student() {
        cur_id = ++student_id;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

// Initialize static member for Student
int Student::student_id = 0;
