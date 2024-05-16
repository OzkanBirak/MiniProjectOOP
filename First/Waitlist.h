#include <iostream>
#include <string> 
#include <vector>
#include "Student.h"
#include "Course.h"

using namespace std;
#ifndef WAITLIST_H
#define WAITLIST_H

//waitlistId, studentId, courseCode
class waitlist{
protected:

  long int waitlistId; 
  long int studentId;
  long int courseCode;

public:

  long int getWaitlistId(){return waitlistId;}
  long int getStudentId(){return studentId;}
  long int getCourseCode(){return courseCode;}

  void setWaitlistId(long int waitlistId){this->waitlistId=waitlistId;}
  void setStudentId(long int studentId){this->studentId=studentId;}
  void setCourseCode(long int courseCode){this->courseCode=courseCode;}
  
};
#endif
