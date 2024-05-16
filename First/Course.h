#include <iostream>
#include <string> 

using namespace std;

#ifndef COURSE_H
#define COURSE_H

class Course{

//Course Code, Title, Credits, Instructor, Schedule, Location, Prerequesities, Enrollment limit, Waitlist Capacity

protected:
  long int CourseCode;
  long int Title;
  string Credits;
  string InstructorName;
  string Schedule;
  string Location;
  string Prerequesities;
  int EnrollmentLimit;
  int WaitlistCapacity;

public: 
  long int getCourseCode(){return CourseCode;}
  long int getTitle(){return Title;}
  string getCredits(){return Credits;}
  string getInstructorName(){return InstructorName;}
  string getSchedule(){return Schedule;}
  string getLocation(){return Location;}
  string getPrerequesities(){return Prerequesities;}
  int getEnrollmentLimit(){return EnrollmentLimit;}
  int getWaitlistCapacity(){return WaitlistCapacity;}

  void setCourseCode(long int CourseCode){this->CourseCode=CourseCode;}
  void setTitle(long int Title){this->Title=Title;}
  void setCredits(string Credits){this->Credits=Credits;}
  void setInstructorName(string InstructorName){this->InstructorName=InstructorName;}
  void setSchedule(string Schedule){this->Schedule=Schedule;}
  void setLocation(string Location){this->Location=Location;}
  void setPrerequesities(string Prerequesities){this->Prerequesities=Prerequesities;}
  void setEnrollmentLimit(int EnrollmentLimit){this->EnrollmentLimit=EnrollmentLimit;}
  void setWaitlistCapacity(int WaitlistCapacity){this->WaitlistCapacity=WaitlistCapacity;}
  
};

#endif
