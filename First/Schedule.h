#include <iostream>
#include <string> 
#include <vector>

using namespace std;

#ifndef SCHEDULE_H
#define SCHEDULE_H

// studenId, courseCode, semester, days, room

class schedule{

  protected:

    long int studentId;
    long int courseCode;
    string semester;
    string days;
    string room;

  public:

    long int getStudentId(){return studentId;}
    long int getCourseCode(){return courseCode;}
    string getSemester(){return semester;}
    string getDays(){return days;}
    string getRoom(){return room;}

    void setStudentId(long int studentId){this->studentId=studentId;}
    void setCourseCode(long int courseCode){this->courseCode=courseCode;}
    void setSemester(string semester){this->semester=semester;}
    void setDays(string days){this->days=days;}
    void setRoom(string room){this->room=room;}
};

#endif
