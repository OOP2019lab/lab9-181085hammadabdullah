#include <iostream>
#include <string>
#include <fstream>
#include "Address_18l1085.h"
#include "Project_18l1085.h"

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{//cout operator for empolyee
	friend ostream& operator<<(ostream& osObject, const Employee& obj){
		osObject<<"Name Of Employee Is : "<<obj.emp_name<<endl;
		osObject<<"Adress Of Employee Is : "<<obj.a<<endl;
		osObject<<"The Projects Of Employee : "<<obj.emp_name<<endl;
		osObject<<"The pROJECT oF empolyee IS :"<<endl;
		for(int i=0;i<obj.noofp;i++){
			osObject<<obj.a1[i][0]<<" ";
		}
		return osObject;
	}
	char* emp_name; 
	Address a;
	Project **a1;
	int noofp;
	//Add Data Members here
	
public:
	Employee(char* name, const Address&);
	//overloaded constructor
	Employee(const Employee&);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Employee&);
	//overloaded insertion operator
	const Employee &   operator=(const Employee& other);
	//overloaded assignment operator

	void addProject(Project const * );
	void removeProject(Project const * ); 

	~Employee();

}; 
#endif