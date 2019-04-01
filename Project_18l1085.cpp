#include "stdafx.h"
#include "Project_18l1085.h"
Project::Project(char* Name, int Budget, int Duration){
	int a=strlen(Name);
	name=new char[a+1];
	for(int i=0;i<Name[i]!='\0';i++){
		name[i]=Name[i];
	}
	name[a]='\0';
	budget=Budget;
	duration=Duration;
	
}
Project::Project(const Project& obj){
	int a=strlen(obj.name);
	name=new char[a+1];
	for(int i=0;i<obj.name[i]!='\0';i++){
		name[i]=obj.name[i];
	}
	name[a]='\0';
	budget=obj.budget;
	duration=obj.duration;
}
const Project& Project::operator=(const Project& obj){
	int a=strlen(obj.name);
	name=new char[a+1];
	for(int i=0;i<obj.name[i]!='\0';i++){
		name[i]=obj.name[i];
	}
	name[a]='\0';
	budget=obj.budget;
	duration=obj.duration;
	return *this;
}
void Project::setBudget(int n){
	budget=n;
}
Project::~Project(){
	if(name!=nullptr){
	delete [] name;
	}
}
