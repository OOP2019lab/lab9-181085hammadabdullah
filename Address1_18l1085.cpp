#include "stdafx.h"
#include "Address_18l1085.h"

Address::Address(char* House_Number, char* Street_Name, char * City,char* County){
	int a=strlen(House_Number);//Measuring lenght of Char array House_Number
	house_Number=new char[a+1];//Giving memory to house_number private member of class address
	for(int i=0;House_Number[i]!='\0';i++){
		house_Number[i]=House_Number[i];
	}
	house_Number[a]='\0';
	a=strlen(Street_Name);//Measuring lenght of Char array stree_name
	street_Name=new char[a+1];//Giving memory to street_name priavte member of class adress
	for(int i=0;Street_Name[i]!='\0';i++){
		street_Name[i]=Street_Name[i];
	}
	street_Name[a]='\0';
	a=strlen(City);//Measuring lenght of Char array city
	city=new char[a+1];//Giving memory to city array
	for(int i=0;City[i]!='\0';i++){
		city[i]=City[i];
	}
	city[a]='\0';
	a=strlen(County);//Measuring lenght of Char array country
	county=new char[a+1];//Giving memory to county array
	for(int i=0;County[i]!='\0';i++){
		county[i]=County[i];
	}
	county[a]='\0';
}
Address::Address(const Address & obj){
	int a=strlen(obj.house_Number);//Measuring lenght of Char array House_Number
	house_Number=new char[a+1];//Giving memory to street_name priavte member of class adress
	for(int i=0;obj.house_Number[i]!='\0';i++){
		house_Number[i]=obj.house_Number[i];
	}
	house_Number[a]='\0';
	a=strlen(obj.street_Name);//Measuring lenght of Char array stree_name
	street_Name=new char[a+1];//Giving memory to street_name priavte member of class adress
	for(int i=0;obj.street_Name[i]!='\0';i++){
		street_Name[i]=obj.street_Name[i];
	}
	street_Name[a]='\0';
	a=strlen(obj.city);//Measuring lenght of Char array city
	city=new char[a+1];//Giving memory to city array
	for(int i=0;obj.city[i]!='\0';i++){
		city[i]=obj.city[i];
	}
	city[a]='\0';
	a=strlen(obj.county);//Measuring lenght of Char array country
	county=new char[a+1];//Giving memory to county array
	for(int i=0;obj.county[i]!='\0';i++){
		county[i]=obj.county[i];
	}
	county[a]='\0';
}
const  Address &Address::operator=(const Address& obj){
	int a=strlen(obj.house_Number);
	house_Number=new char[a+1];
	for(int i=0;obj.house_Number[i]!='\0';i++){
		house_Number[i]=obj.house_Number[i];
	}
	house_Number[a]='\0';
	a=strlen(obj.street_Name);
	street_Name=new char[a+1];
	for(int i=0;obj.street_Name[i]!='\0';i++){
		street_Name[i]=obj.street_Name[i];
	}
	street_Name[a]='\0';
	a=strlen(city);
	city=new char[a+1];
	for(int i=0;obj.city[i]!='\0';i++){
		city[i]=obj.city[i];
	}
	city[a]='\0';
	a=strlen(obj.county);
	county=new char[a+1];
	for(int i=0;obj.county[i]!='\0';i++){
		county[i]=obj.county[i];
	}
	county[a]='\0';
	return *this; 
}
Address::~Address(){
	if(house_Number!=nullptr){
		delete [] house_Number;
	}
	if(city!=nullptr){
	delete [] city;
	}
	if(street_Name!=nullptr){
		delete [] street_Name;
	}
	if(county!=nullptr){
		delete [] county;
	}
}