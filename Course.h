#include <iostream>
#include <string>
using namespace std;

class student;
class course{
private:
	string course_name;
	string course_number;
	int students;
	student** stds;
	bool addStudent(student* s);
public:
	course(string, string);
	friend class student;
	void print();
	int getStudents(){
		return students;
	}
	void addStudent_task2(student* s);
};