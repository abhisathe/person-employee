#include"person.h"
int person :: count = 0;
person::person()
{
	this->age = 0;
	strcpy(this->name, "unknown");
	strcpy(this->city, "bhopal");
	count++;
}
person::person(char* name,int age,char* city)
{
this->age = age;
strcpy(this->name, name);
strcpy(this->city, city);
count++;
}
void person::accept()
{
	cout << "enter your details___________________________::";
	cout<< "enter your name::";
	cin >> this->name;
	cout << "enter your age::";
	cin >>this->age ;
	cout << "enter your city";
	cin >> this->city;
	
}
void person::display()
{
	cout << "Details are ::" << this->name << this->age << this->city;
	cout << "empid= " << getcount();
}
int person::getcount()
{
	return count;
}