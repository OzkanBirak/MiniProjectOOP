#include <iostream>
#include <string> 

using namespace std;

#ifndef FACULTY_H
#define FACULTY_H

//facultyID, FacultyName, FacultyEmail, FacultyPhoneNumber, Department, CoursesTaught

class Faculty{

protected:
  int faculyId;
  string FacultyName;
  string FacultyEmail;
  string FacultyPhoneNumber;
  string department;
  string coursesTaught;

public:
  int getFacultyId(){return faculyId;}
  string getFacultyName(){return FacultyName;}
  string getFacultyEmail(){return FacultyEmail;}
  string getFacultyPhoneNumber(){return FacultyPhoneNumber;}
  string getDepartment(){return department;}
  string getCoursesTaught(){return coursesTaught;}

  void setFacultyId(int faculyId){this->faculyId=faculyId;}
  void setFacultyName(string name){this->FacultyName=name;}
  void setFacultyEmail(string email){this->FacultyEmail=email;}
  void setFacultyPhoneNumber(string phoneNumber){this->FacultyPhoneNumber=phoneNumber;}
  void setDepartment(string department){this->department=department;}
  void setCoursesTaught(string coursesTaught){this->coursesTaught=coursesTaught;}

};

#endif
