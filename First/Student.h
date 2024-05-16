/*
    
#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
// studentId, semester, days, room
class Student{

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
    Student(long int StudentId, string Name, int Grade, string Email, string PhoneNumber, string Major, int Year){
        studentId = StudentId;
        name = Name;
        grade = Grade;
        email = Email;
        phoneNumber = PhoneNumber;
        major = Major;
        year_semester = Year;
    }

    long int getStudentId(){return studentId;}
    string getName(){return name;}
    int getGrade(){return grade;}
    string getEmail(){return email;}
    string getPhoneNumber(){return phoneNumber;}
    string getMajor(){return major;}
    int getYear_semester(){return year_semester;}
    string getRegistration_status(){return registration_status;}
    string getWaitlist_status(){return waitlist_status;}

    void setStudentId(long int id){this->studentId=studentId;}
    void setName(string name){this->name=name;}
    void setGrade(int score){this->grade=grade;}
    void setEmail(string email){this->email=email;}
    void setPhoneNumber(string phoneNumber){this->phoneNumber=phoneNumber;}
    void setMajor(string major){this->major=major;}
    void setYear_semester(int year_semester){this->year_semester=year_semester;}
    void setRegistration_status(string registration_status){this->registration_status=registration_status;}
    void setWaitlist_status(string waitlist_status){this->waitlist_status=waitlist_status;}

    void getInfo(){
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
        cout << endl << "Major:";
        cin >> major;
        cout << endl << "Year Semester: ";
        cin >> year_semester;
    
        
    }

    void login();
    void logout();
    void enroll();
    void unenroll();
    
};

#endif

*/


#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int studentNum = 0;
    int* students;  // Pointer to dynamically allocated array
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
//constructor
    Student(long int StudentId, string Name, int Grade, string Email, string PhoneNumber, string Major, int Year)
        : studentId(StudentId), name(Name), grade(Grade), email(Email), phoneNumber(PhoneNumber), major(Major), year_semester(Year) {
            students = new int[studentNum];  // Dynamically allocate memory for students array
        }

~Student() {
    // Release dynamically allocated memory in the destructor
    delete[] students;
    
}

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
        studentNum++;
    }

    void login() { cout << name << " logged in." << endl; }
    void logout() { cout << name << " logged out." << endl; }
    void enroll() { cout << name << " enrolled." << endl; }
    void unenroll() { cout << name << " unenrolled." << endl; }
};

#endif
