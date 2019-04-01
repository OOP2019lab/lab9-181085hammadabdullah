#include "stdafx.h"
#include "Empolyee_18l1085.h"
Employee::Employee(char* Name, const Address& obj)
:a(obj){
	int a=strlen(Name);
	emp_name=new char[a+1];
	for(int i=0;Name[i]!='\0';i++){
		emp_name[i]=Name[i];
	}
	emp_name[a]='\0';
}
Employee::Employee(const Employee& obj)
:a(obj.a){
	int a=strlen(obj.emp_name);
	a1=new Project*[obj.noofp];
	emp_name=new char[a+1];
	for(int i=0;obj.emp_name[i]!='\0';i++){
		emp_name[i]=obj.emp_name[i];
	}
	for(int i=0;i<noofp;i++){
	a1[i]=obj.a1[i];
	}	
}
const Employee& Employee::operator=(const Employee& obj){
	a=obj.a;
	int a=strlen(obj.emp_name);
	a1=new Project*[obj.noofp];
	emp_name=new char[a+1];
	for(int i=0;obj.emp_name[i]!='\0';i++){
		emp_name[i]=obj.emp_name[i];
	}
	for(int i=0;i<noofp;i++){
	a1[i]=obj.a1[i];
	}	
	return *this;

}
void Employee::addProject(Project const * obj){
	int count=0;
	for(int i=0;i<noofp;i++){//check for already exsisting projeect
		if(a1[i]==obj){
		cout<<"This Project Already Exsists"<<endl;
		count=1;
		}
	}
	if(count==0){//if count==0 then this poject is new
	if(a1==nullptr){
		a1=new Project*[2];
		a1[0]= new Project(*obj);
		noofp=1;
	}
	else if(a1!=nullptr && noofp<2){
		a1[noofp]= new Project(*obj);
		noofp++;
	}
	else if(noofp>=2){//check if number of projects are equal to 2 or greater then it
	cout<<"You Cannot Add more Projects Because Array of Projects has been full"<<endl;
	}
	}
}
void Employee::removeProject(Project const * obj){
	
	if(a1[0]==obj){
	delete a1[0];
	a1[0]=nullptr;
	noofp--;
	a1[0]=a1[1];
	delete a1[1];
	a1[1]=nullptr;
	}
	else if(a1[1]==obj){
	delete a1[1];
	a1[1]=nullptr;
	noofp--;
	}
}
Employee::~Employee(){

	if(emp_name!=nullptr){
		delete [] emp_name;
	}
	if(a1!=nullptr){
		if(a1[0]!=nullptr){
		delete a1[0];
		}
		if(a1[1]!=nullptr){
		delete a1[1];
		}
	}
}