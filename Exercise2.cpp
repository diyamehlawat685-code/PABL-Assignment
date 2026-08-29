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
    Student s1, s2, s3;

    s1.name = "Diya";
    s1.age = 20;
    s1.course = "B.Tech AI & ML";

    s2.name = "Rahul";
    s2.age = 21;
    s2.course = "B.Tech CSE";

    s3.name = "Priya";
    s3.age = 19;
    s3.course = "BCA";

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Course: " << s1.course << endl;

    cout << "\nStudent 2:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Course: " << s2.course << endl;

    cout << "\nStudent 3:" << endl;
    cout << "Name: " << s3.name << endl;
    cout << "Age: " << s3.age << endl;
    cout << "Course: " << s3.course << endl;

    return 0;
}