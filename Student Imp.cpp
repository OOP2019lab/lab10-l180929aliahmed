#include "Student.h"
#include "Course.h"

student::student(string Name, string roll){
	name=Name;
	roll_number=roll;
	crs=new course*[2];
	courses=0;
}

void student::addCourse(course* c){
	if(courses<2){
		if(c->addStudent(this)){
			bool exists=false;
			for(int i=0; i<courses; i++){
				if(crs[i]->course_name==c->course_name)
					exists=true;
			}
			if(!exists){
				crs[courses]=c;
				courses++;
			}
			else
				cout<<"Course already taken!"<<endl;
		}
	}
	else
		cout<<"Student is already taking two courses!"<<endl;
}

string student::getName(){
	return name;
}

void student::print(){
	cout<<endl;
	cout<<"Roll Number: "<<roll_number<<endl;
	cout<<"Courses: "<<endl;
	for(int i=0; i<courses; i++)
		cout<<crs[i]->course_name<<endl;
	cout<<endl;
}


void student::addCourse_task2(course* c){
	if(courses<2){
		if(c->getStudents()<4){
			bool exists=false;
			for(int i=0; i<courses; i++){
				if(crs[i]->course_name==c->course_name)
					exists=true;
			}
			if(!exists){
				crs[courses++]=c;
 				c->addStudent_task2(this);
			}
		}
	}
	else
		cout<<"Student is already taking two courses!"<<endl;
}
