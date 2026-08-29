#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;
    string department;

    Employee(int i, string n, double s, string d) {
        id = i;
        name = n;
        salary = s;
        department = d;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee e1(101, "Diya", 50000, "AI & ML");

    e1.display();

    return 0;
}