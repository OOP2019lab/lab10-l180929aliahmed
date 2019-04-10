#include "Course.h"
#include "Student.h"

course::course(string cname, string cnumber){
	course_name=cname;
	course_number=cnumber;
	stds=new student*[4];
	students=0;
}

bool course::addStudent(student* s){
	if(students<4){
		stds[students++]=s;
		return true;
	}
	else{
		cout<<"Course already has four students!"<<endl;
		return false;
	}
}

void course::print(){
	cout<<endl;
	cout<<"Course Name: "<<course_name<<endl;
	cout<<"Course ID: "<<course_number<<endl;
	cout<<"Students: "<<endl;
	for(int i=0; i<students; i++)
		cout<<stds[i]->getName()<<endl;
	cout<<endl;
}


void course::addStudent_task2(student* s){
	if(students<4){
		if(s->getCourses()<2){
			bool exists=false;
			for(int i=0; i<students; i++){
				if(stds[i]->getName()==s->getName())
					exists=true;
			}
			if(!exists){
				stds[students++]=s;
				s->addCourse_task2(this);
			}
		}
	}
	else{
		cout<<"Course already has four students!"<<endl;
	}
}