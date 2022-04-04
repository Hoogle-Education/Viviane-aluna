#include "Classes.h"

Assingment::Assingment(& assignment) {
	name = NULL;
}

Assingment::Assingment(string* _name, string _due_date) {
	name = _name;
	due_date = _due_date;
}


Assingment::~Assingment() {
	delete[] name;
	name = NULL;
}

string* Assingment::GetName() {
	return name;
}

void Assingment::SetName(string* _name) {
	name = _name;
}

string Assingment::GetDue_date() {
	return due_date;
}

void Assingment::SetDue_date(string _due_date) {
	due_date = _due_date;
}

Assingment& Assingment::operator=(const Assingment assingment) {
	name = assingment.name;
	due_date = assingment.due_date;

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
		cout << "There are no assingments in list!" << endl;
		cout << "------------------------" << endl;
	}

	for (int i = 0; i < assignments.size(); i++) {
		cout << "------------------------" << endl;
		cout << "Due date: ";
		cout << assignments[i].GetDue_date() << endl;
		
		cout << "Names of assingment: ";
		
		for (int j = 0; j <= assignments[i].GetName()->size(); j++) {
			cout << assignments[i].GetName()[j] << endl;
		}

		cout << "------------------------" << endl;
	}
}

void Course::AddAssingment(const Assingment assignment) {
	assignments.push_back(assignment);
}
