#include <iostream>
#include<string>
using namespace std;

class course;
class student{
private:
	string username;
	string name;
	string roll_number;
	int courses;
	course** crs;
public:
	student(string , string);
	void addCourse(course* c);
	void print();
	int getCourses(){
		return courses;
	}
	string getName();
	void addCourse_task2(course* c);
};