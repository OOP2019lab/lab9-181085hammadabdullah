#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef PROJECT_H
#define PROJECT_H
class Project
{
	//ostream cout<< operator for project 
	friend ostream& operator<<(ostream& osObject, const Project& obj){
		osObject<<"Name Of Project Is : "<<obj.name<<endl;
		osObject<<"Budget Of Project Is  : "<<obj.budget<<endl;
		osObject<<"Duration Of Budject is : "<<obj.duration<<endl;
		return osObject;
}
private:
	char* name;
	int budget;
	int duration; //estimate duration of project in weeks

public: 
	Project(char* name, int budget, int duration);
	// an overloaded constructor
	Project(const Project&);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Project&);
	//overloaded insertion operator
	const Project &   operator=(const Project& other);
	//overloaded assignment operator
	void setBudget(int); 
	~Project();
}; 
#endif