#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    // Create a Student object with some default values (these will be overwritten by getInfo)
    Student student1(0, "", 0, "", "", "", 0);

    // Call the getInfo method to get student details from user input
    student1.getInfo();

    // Display the entered information
    cout << "\nEntered Student Information:" << endl;
    cout << "ID: " << student1.getStudentId() << endl;
    cout << "Name: " << student1.getName() << endl;
    cout << "Grade: " << student1.getGrade() << endl;
    cout << "Email: " << student1.getEmail() << endl;
    cout << "Phone Number: " << student1.getPhoneNumber() << endl;
    cout << "Major: " << student1.getMajor() << endl;
    cout << "Year Semester: " << student1.getYear_semester() << endl;

    // Using other methods for demonstration
    student1.login();
    student1.enroll();
    student1.unenroll();
    student1.logout();

    return 0;
}



---



    #include <iostream>
    #include <vector>
    #include "Student.h"

    using namespace std;

    int main() {
        // Vector to store multiple Student objects
        vector<Student> students;
        int numberOfStudents;

        cout << "Enter the number of students: ";
        cin >> numberOfStudents;
        cin.ignore(); // Ignore remaining newline character

        // Loop to input student data
        for (int i = 0; i < numberOfStudents; ++i) {
            cout << "\nEntering details for student " << i + 1 << ":\n";
            Student student(0, "", 0, "", "", "", 0);
            student.getInfo();
            students.push_back(student);
        }

        // Display information for all students
        cout << "\nStudent Information:\n";
        for (const auto& student : students) {
            cout << "\nStudent ID: " << student.getStudentId() << endl;
            cout << "Name: " << student.getName() << endl;
            cout << "Grade: " << student.getGrade() << endl;
            cout << "Email: " << student.getEmail() << endl;
            cout << "Phone Number: " << student.getPhoneNumber() << endl;
            cout << "Major: " << student.getMajor() << endl;
            cout << "Year Semester: " << student.getYear_semester() << endl;
            cout << "-------------------------------" << endl;
        }

        // Optionally, demonstrate using other methods on a specific student
        if (!students.empty()) {
            students[0].login();
            students[0].enroll();
            students[0].unenroll();
            students[0].logout();
        }

        return 0;
    }



---



    #include <iostream>
    #include <vector>
    #include "Student.h"

    using namespace std;

    int main() {
        vector<Student> students;
        char addMore = 'y';

        // Loop to continuously add new students
        while (addMore == 'y' || addMore == 'Y') {
            cout << "\nEntering details for a new student:\n";
            Student student(0, "", 0, "", "", "", 0);
            student.getInfo();
            students.push_back(student);

            cout << "Do you want to add another student? (y/n): ";
            cin >> addMore;
            cin.ignore(); // Ignore remaining newline character
        }

        // Display information for all students
        cout << "\nStudent Information:\n";
        for (const auto& student : students) {
            cout << "\nStudent ID: " << student.getStudentId() << endl;
            cout << "Name: " << student.getName() << endl;
            cout << "Grade: " << student.getGrade() << endl;
            cout << "Email: " << student.getEmail() << endl;
            cout << "Phone Number: " << student.getPhoneNumber() << endl;
            cout << "Major: " << student.getMajor() << endl;
            cout << "Year Semester: " << student.getYear_semester() << endl;
            cout << "-------------------------------" << endl;
        }

        // Optionally, demonstrate using other methods on a specific student
        if (!students.empty()) {
            students[0].login();
            students[0].enroll();
            students[0].unenroll();
            students[0].logout();
        }

        return 0;
    }
