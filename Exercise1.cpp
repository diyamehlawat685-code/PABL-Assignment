#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
};

int main() {
    Student s1;

    s1.name = "Diya";
    s1.age = 20;
    s1.course = "B.Tech AI & ML";

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Course: " << s1.course << endl;

    return 0;
}