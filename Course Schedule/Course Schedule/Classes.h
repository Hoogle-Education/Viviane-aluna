#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Assingment {
	private:
		string* name;
		string due_date;
	public:
		
		Assingment();
		Assingment(string* _name, string _due_date);
		~Assingment();

		string* GetName();
		void SetName( string* _name);
		
		string GetDue_date();
		void SetDue_date( string _due_date);

		Assingment& operator= (const Assingment assingment);

};

class Course {
	private:
		string course_name;
		string course_number;
		vector <Assingment> assignments;
	public:
		
		Course(string course_name, string course_number);

		string getCourse_name();
		void setCourse_name(string _course_name);
		string getCourse_number();
		void setCourse_number(string _course_number);

		void showCourse();
		void AddAssingment(const Assingment assingment);
};


