#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Registration.h"
#include "AdministrativeStaff.h"
using namespace std;

int main() {
    // Create some courses
    Course course1(101, "Introduction to Programming", 3, "Dr. Smith", CourseType::LECTURE);
    Course course2(102, "Data Structures", 4, "Dr. Johnson", CourseType::LAB);
    Course course3 (103, "General Physics I", 4, "Dr. M. Fatih Hasoglu", CourseType::LECTURE);
    Course course4 (104, "General Physics II", 4, "Dr. M. Fatih Hasoglu", CourseType::LECTURE);
    Course course5 (105, "Technical English", 3, "Prof. Robert Harris", CourseType::LECTURE);
    Course course6 (106, "Calculus", 4, "Dr. Laura Chen", CourseType::LECTURE);
    Course course7 (107, "Introduction to Computer Science", 3, "Dr. John", CourseType::LECTURE);
    Course course8 (108, "Introduction to Computer Science Lab", 2, "Dr. John", CourseType::LAB);
    Course course9 (109, "Introduction to Software Programming", 3, "Dr. Olivia Martinez", CourseType::LECTURE);
    Course course10 (110, "Introduction to Software Programming Lab", 3, "Dr. Olivia Martinez", CourseType::LAB);
    Course course11 (111, "Database Systems", 3, "Dr. Emma Wilson", CourseType::LECTURE);
    Course course12 (112, "Database Systems Lab", 3, "Dr. Emma Wilson", CourseType::LAB);
    Course course13 (113, "Introduction to Operating Systems", 2, "Dr. Michael Davis", CourseType::LECTURE);
    Course course14 (114, "Artificial Intelligence", 4, "Prof. Christopher Moore", CourseType::LECTURE);
    Course course15 (115, "Artificial Intelligence Lab", 4, "Prof. Christopher Moore", CourseType::LAB);
    Course course16 (116, "Machine Learning", 4, "Dr. Sophia Anderson", CourseType::LECTURE);
    Course course17 (117, "Machine Learning Lab", 4, "Dr. Sophia Anderson", CourseType::LAB);
    Course course18 (118, "Natural Language Processing", 3, "Prof. Emily Thompson", CourseType::LECTURE);    
    Course course19 (119, "Full-Stack Web Development" , 4, "Prof. Jane Doe", CourseType::LECTURE);
    Course course20 (120, "Full-Stack Web Development Lab", 4, "Prof. Jane Doe", CourseType::LAB);
    

    // Display available courses
    cout << "Available Courses:" << endl;
    course1.displayCourseInfo();
    course2.displayCourseInfo();
    course3.displayCourseInfo();
    course4.displayCourseInfo();
    course5.displayCourseInfo();
    course6.displayCourseInfo();
    course7.displayCourseInfo();
    course8.displayCourseInfo();
    course9.displayCourseInfo();
    course10.displayCourseInfo();
    course11.displayCourseInfo();
    course12.displayCourseInfo();
    course13.displayCourseInfo();
    course14.displayCourseInfo();
    course15.displayCourseInfo();
    course16.displayCourseInfo();
    course17.displayCourseInfo();
    course18.displayCourseInfo();
    course19.displayCourseInfo();
    course20.displayCourseInfo();

    
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
