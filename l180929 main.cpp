#include "Course.h"
#include "Student.h"


int main(){
	student s1("Anum","11-1351");
	student s2("Sara","12-6462");
	student s3("Sana", "11-4531");
	student s4("Zara","12-4342");
	student s5("Hira", "11-5940");
	
	course c1("OOP", "CS102");
	course c2("PF", "CS101");
	course c3("AI", "CS356");

	s1.addCourse(&c1);
	s1.addCourse(&c2);
	s1.addCourse(&c2);

	s2.addCourse(&c2);
	s3.addCourse(&c2);
	s4.addCourse(&c2);
	s5.addCourse(&c2);

	//c1.addStudent(s5);
	
	s1.print();
	c2.print();
	c1.print();

	//Task 2:
	c1.addStudent_task2(&s5);
	s5.addCourse_task2(&c3);
	c1.addStudent_task2(&s5);

	s5.print();
	c1.print();
	c3.print();
}
