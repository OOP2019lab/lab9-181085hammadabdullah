
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <fstream>
#include <cstring>
using namespace std;
class Address
{
	//cout<< operator for address
	friend ostream& operator<<(ostream& osObject, const Address& obj){
		osObject<<"HOuse No is :"<<obj.house_Number<<endl;
		osObject<<"Street Name is :"<<obj.street_Name<<endl;
		osObject<<"City is :"<<obj.city<<endl;
		osObject<<"Country  is :"<<obj.county<<endl;
		return osObject;
	}
private:
	char* house_Number;
	char* street_Name ;
	char * city;
	char* county;

public:
	
	Address(char* house_Number, char* Street_Name, char * City,char* County);
	// an overloaded constructor
	Address(const Address&);
	//copy constructor
	
	//overloaded insertion operator
	const Address &   operator=(const Address& other);
	//overloaded assignment operator
	~Address();
};
#endif