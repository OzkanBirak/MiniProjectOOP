#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Registration.h"
#include "AdministrativeStaff.h"
using namespace std;

int main() {
    // Create some sample courses
    Course course1(101, "Introduction to Programming", 3, "Dr. Smith", CourseType::LECTURE);
    Course course2(102, "Data Structures", 4, "Dr. Johnson", CourseType::LAB);

    // Display available courses
    cout << "Available Courses:" << endl;
    course1.displayCourseInfo();
    course2.displayCourseInfo();
    cout << endl;

    // Create a student
    Student student;
    student.getInfo();

    // Let the student choose a course
    int selectedCourseCode;
    cout << "Enter the course code of the course you want to register for: ";
    cin >> selectedCourseCode;

    long int registrationId;
    cout << "Enter registration ID: ";
    cin >> registrationId;

    string registrationDate;
    cout << "Enter registration date (YYYY-MM-DD): ";
    cin >> registrationDate;

    // Simulate administrative staff enrolling the student in the selected course
    //AdministrativeStaff admin;
    Course* selectedCourse = nullptr;
    if (selectedCourseCode == course1.getCourseCode()) {
        selectedCourse = &course1;
    } else if (selectedCourseCode == course2.getCourseCode()) {
        selectedCourse = &course2;
    } else {
        cout << "Invalid course code." << endl;
        return 1;
    }

    // Register the student in the selected course
    Registration registration(registrationId, student.getStudentId(), selectedCourse->getCourseCode(), registrationDate, "Registered", "Pending Payment");

    // Display registration details
    cout << "Registration Details:" << endl;
    cout << "Student Name: " << student.getName() << endl;
    cout << "Course Name: " << selectedCourse->getTitle() << endl;
    cout << "Registration ID: " << registration.getRegistrationId() << endl;
    cout << "Registration Date: " << registration.getRegistrationDate() << endl;
    cout << "Registration Status: " << registration.getStatus() << endl;
    cout << "Payment Status: " << registration.getPaymentStatus() << endl;

    return 0;
}
