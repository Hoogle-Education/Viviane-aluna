#pragma once
#include <string>

class Assingment{

  private:
    char* name;
    string due_date;

  public:

  Assingment(char* _name, string _due_date);

  Assingment();

  char* get_name();
  void set_name(char* _name);
  string get_due_date();
  void set_due_date(string _due_date);

    Assignment& operator= (const Assignment assignment);

}

class Course{

  private:
    string course_name;
    string couse_number;
    Vector <Assingment> assingments;

  public:

    Course(string _couse_name, string _course_number);

    string get_course_name();
    void set_course_name(string _course_name);
    string get_course_number();
    void set_course_number(string _course_number);

    void show_content();    

}