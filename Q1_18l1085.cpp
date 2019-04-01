// Q1_18l1085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Address_18l1085.h"
#include "Empolyee_18l1085.h"
#include "Project_18l1085.h"

void main()
{
	//creating new address
	Address *A1= new Address("19B", "Foggy Street", "London", "UK");
	cout<<*A1<<endl; 	
	
	//creating 3 projects
	Project *P1=new Project("Database Project 1", 15000, 10 );
	Project *P2=new Project("Database Project 2", 100000, 18 );
	Project *P3= new Project("OOP1", 0, 5 );
	cout<<*P1<<endl;
	cout<<*P2<<endl;
	cout<<*P3<<endl;

	//creating one employee
	Employee *E1=new Employee ("Sam", *A1);
	
	//testing addition and removal of projects in employee E1
	E1->addProject(P1);
	E1->addProject(P1);
	E1->addProject(P2);
	E1->addProject(P3);
	E1->removeProject(P2);
	E1->addProject(P3);
 	system("PAUSE");
	//print E1 using overloaded insertion operator
	cout<<*E1;
 
	//changing the budget of P3
	P3->setBudget(180000);
	
	cout<<*P3;
	system("pause");
	//Check if the changes in P3 are also reflected in E1
	cout<<*E1;
 
 
	system("PAUSE");
}
 
 


