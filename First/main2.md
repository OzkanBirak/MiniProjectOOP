#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    // Create a Student object
    Student student1(123456, "John Doe", 90, "john.doe@example.com", "555-1234", "Computer Science", 2);

    // Display initial information
    cout << "Student Information:" << endl;
    cout << "ID: " << student1.getStudentId() << endl;
    cout << "Name: " << student1.getName() << endl;
    cout << "Grade: " << student1.getGrade() << endl;
    cout << "Email: " << student1.getEmail() << endl;
    cout << "Phone Number: " << student1.getPhoneNumber() << endl;
    cout << "Major: " << student1.getMajor() << endl;
    cout << "Year Semester: " << student1.getYear_semester() << endl;

    // Update some details
    student1.setEmail("new.email@example.com");
    student1.setPhoneNumber("555-5678");

    // Display updated information
    cout << "\nUpdated Student Information:" << endl;
    cout << "Email: " << student1.getEmail() << endl;
    cout << "Phone Number: " << student1.getPhoneNumber() << endl;

    // Using other methods
    student1.login();
    student1.enroll();
    student1.unenroll();
    student1.logout();

    return 0;
}


---



    #ifndef STUDENT_H
    #define STUDENT_H

    #include <iostream>
    #include <string>

    using namespace std;

    class Student {
    private:
        long int studentId;
        string name;
        int grade;
        string email;
        string phoneNumber;
        string major;
        int year_semester;
        string registration_status;
        string waitlist_status;

    public:
        Student(long int StudentId, string Name, int Grade, string Email, string PhoneNumber, string Major, int Year)
            : studentId(StudentId), name(Name), grade(Grade), email(Email), phoneNumber(PhoneNumber), major(Major), year_semester(Year) {}

        long int getStudentId() { return studentId; }
        string getName() { return name; }
        int getGrade() { return grade; }
        string getEmail() { return email; }
        string getPhoneNumber() { return phoneNumber; }
        string getMajor() { return major; }
        int getYear_semester() { return year_semester; }
        string getRegistration_status() { return registration_status; }
        string getWaitlist_status() { return waitlist_status; }

        void setStudentId(long int id) { studentId = id; }
        void setName(string name) { this->name = name; }
        void setGrade(int score) { grade = score; }
        void setEmail(string email) { this->email = email; }
        void setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
        void setMajor(string major) { this->major = major; }
        void setYear_semester(int year_semester) { this->year_semester = year_semester; }
        void setRegistration_status(string registration_status) { this->registration_status = registration_status; }
        void setWaitlist_status(string waitlist_status) { this->waitlist_status = waitlist_status; }

        void getInfo() {
            cout << "Student ID: ";
            cin >> studentId;
            cout << endl << "Name: ";
            cin >> name;
            cout << endl << "Grade: ";
            cin >> grade;
            cout << endl << "Email: ";
            cin >> email;
            cout << endl << "Phone Number: ";
            cin >> phoneNumber;
            cout << endl << "Major: ";
            cin >> major;
            cout << endl << "Year Semester: ";
            cin >> year_semester;
        }

        void login() { cout << name << " logged in." << endl; }
        void logout() { cout << name << " logged out." << endl; }
        void enroll() { cout << name << " enrolled." << endl; }
        void unenroll() { cout << name << " unenrolled." << endl; }
    };

    #endif
