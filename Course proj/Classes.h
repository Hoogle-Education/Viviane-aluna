#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Assignment {
	private:
		string name;
		string due_date;
	public:
		
		Assignment(const Assignment &assigment);
		Assignment(string _name, string _due_date);
		~Assignment();

		string GetName();
		void SetName( string _name);
		
		string GetDue_date();
		void SetDue_date( string _due_date);

		Assignment& operator= (const Assignment Assignment);

};

class Course {
	private:
		string course_name;
		string course_number;
	public:
		
		vector <Assignment> assignments;
		Course(string course_name, string course_number);

		string getCourse_name();
		void setCourse_name(string _course_name);
		string getCourse_number();
		void setCourse_number(string _course_number);

		void showCourse();
		void AddAssignment(Assignment Assignment);
};


