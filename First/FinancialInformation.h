#include <iostream>
#include <string> 

using namespace std;

#ifndef FINANCIALINFORMATION_H
#define FINANCIALINFORMATION_H

//studentFinancial, courseFees, paymentHistory, financialStatus

class FinancialInformation{ 

protected:
  long int studentFinancial;
  double courseFees;
  string paymentHistory;
  string financialStatus;

public:
  long int getStudentFinancial(){return studentFinancial;}
  double getCourseFees(){return courseFees;}
  string getPaymentHistory(){return paymentHistory;}
  string getFinancialStatus(){return financialStatus;}
  
  void setStudentFinancial(long int studentFinancial){this->studentFinancial=studentFinancial;}
  void setCourseFees(double courseFees){this->courseFees=courseFees;}
  void setPaymentHistory(string paymentHistory){this->paymentHistory=paymentHistory;}
  void setFinancialStatus(string financialStatus){this->financialStatus=financialStatus;}
};
#endif
