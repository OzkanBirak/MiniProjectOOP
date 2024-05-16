#include <iostream>
#include <string> 
#include "Student.h"
#include "Course.h"
#include "Schedule.h"
#include "Waitlist.h"
#include "FinancialInformation.h"
#include "Faculty.h"

using namespace std;

#ifndef REGISTRATION_H
#define REGISTRATION_H

// registrationId, studenId, courseCode, registrationDate, status, paymentStatus,

class Registration{

protected:

  string date;
  long int registrationId;
  long int studentId;
  long int courseCode;
  string registrationDate;
  string status;
  string paymentStatus;

public:

  string getDate(){return date;}
  long int getRegistrationId(){return registrationId;}
  long int getStudentId(){return studentId;}
  long int getCourseCode(){return courseCode;}
  string getRegistrationDate(){return registrationDate;}
  string getStatus(){return status;}
  string getPaymentStatus(){return paymentStatus;}

  void setDate(string date){this->date=date;}
  void setRegistrationId(long int registrationId){this->registrationId=registrationId;}
  void setStudentId(long int studentId){this->studentId=studentId;}
  void setCourseCode(long int courseCode){this->courseCode=courseCode;}
  void setRegistrationDate(string registrationDate){this->registrationDate=registrationDate;}
  void setStatus(string status){this->status=status;}
  void setPaymentStatus(string paymentStatus){this->paymentStatus=paymentStatus;}

};

#endif
