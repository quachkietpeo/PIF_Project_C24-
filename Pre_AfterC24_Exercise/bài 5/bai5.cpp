#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Student {
    string name;
    string mssv;
    uint8_t course_c;
};

void input_student_info(Student& student) {
    cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter student id: ";
    getline(cin, student.mssv);

    cout << "Enter number of C courses (0-255): ";
    while (!(cin >> student.course_c) || student.course_c > 255) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number between 0 and 255: ";
    }
}

void print_student_info(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "Student ID: " << student.mssv << endl;
    cout << "Number of C: " << student.course_c << endl;
}

int main() {
    Student student;
    input_student_info(student);
    print_student_info(student);
    return 0;
}
