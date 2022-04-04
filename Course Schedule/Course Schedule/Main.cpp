#include <iostream>
#include<fstream>
#include "Classes.h"

using namespace std;

int main(void) {

	ifstream file("Course.txt");
	Course* courseList;

	int numberOfCourses;
	file >> numberOfCourses;

	cout << numberOfCourses;

	return 0;
}