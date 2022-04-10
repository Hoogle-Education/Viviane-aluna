#include "Classes.h"

Assignment::Assignment(const Assignment& assignment) {
	name = assignment.name;
	due_date = assignment.due_date;
}

Assignment::Assignment(string _name, string _due_date) {
	name = _name;
	due_date = _due_date;
}

Assignment::~Assignment() {
	delete &name;
}

string Assignment::GetName() {
	return name;
}

void Assignment::SetName(string _name) {
	name = _name;
}

string Assignment::GetDue_date() {
	return due_date;
}

void Assignment::SetDue_date(string _due_date) {
	due_date = _due_date;
}

Assignment& Assignment::operator=(const Assignment Assignment) {
	name = Assignment.name;
	due_date = Assignment.due_date;

	return *this;
}

Course::Course(string course_name, string course_number) {
	this->course_name = course_name;
	this->course_number = course_number;
}


string Course::getCourse_name() {
	return course_name;
}

void Course::setCourse_name(string _course_name) {
	course_name = _course_name;
}

string Course::getCourse_number() {
	return course_number;
}

void Course::setCourse_number(string _course_number) {
	course_number = _course_number;
}


void Course::showCourse() {

	cout << "Name: " << course_name << endl;
	cout << "Number: " << course_number << endl;

	if ( assignments.empty() ) {
		cout << "------------------------" << endl;
		cout << "There are no Assignments in list!" << endl;
		cout << "------------------------" << endl;
	}

	for (int i = 0; i < assignments.size(); i++) {
		cout << "------------------------" << endl;
		cout << "Due date: ";
		cout << assignments[i].GetDue_date() << endl;
		
		cout << "Name of Assignment: " << assignments[i].GetName() << endl;

		cout << "------------------------" << endl;
	}
}

void Course::AddAssignment(const Assignment assignment) {
	assignments.push_back(assignment);
}
