#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll_no;

    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll_no << endl;
    }
};

class Subject : public Student {
public:
    int marks[5];

    void read_marks() {
        cout << "Enter marks in five subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void display_marks() {
        cout << "Marks in five subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Subject {
public:
    void display_result() {
        display();
        display_marks();

        int total_marks = 0;
        for (int i = 0; i < 5; i++) {
            total_marks += marks[i];
        }

        double percentage = (total_marks * 100) / (5 * 100);

        cout << "Total marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;
    student.read();
    student.read_marks();
    student.display_result();

    return 0;
}
