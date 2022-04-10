#include <iostream>
#include <fstream>
#include "Classes.h"

using namespace std;

int main() {

	fstream file;
	file.open("Course.txt", ios::in);
	vector<Course> list;

	int numberOfCourses;
	file >> numberOfCourses;
	// 3

	if (file.is_open()) { 
		string line;
	
		file.ignore();

		while ( getline(file, line) ) { 
			
			if (line[0] != '#') {
				
				bool separate = false;
				string number = "";
				string name = "";
				for (int i = 0; i < line.size(); i++) {
					if (line[i] == ',') {
						separate = true;
					}
					else if (separate) {
						number.push_back(line[i]);
					}
					else {
						name.push_back(line[i]);
					}
				}

				list.push_back( Course(name, number) );

			}
			else {

				int last = list.size() - 1;
				int size = line.size() - 1;
				int pos = line.find(',');
				string name = line.substr(1, pos-1);
				string date = line.substr(pos + 1, size);

				cout << name << " || " << date << endl;
				list[list.size() - 1].assignments.push_back(Assignment(name, date));

			}

		}

		file.close(); 
	}

	for (int i = 0; i < list.size(); i++) {
		list[i].showCourse();
	}

	return 0;
}