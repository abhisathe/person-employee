#ifndef PERSON_H
#define PERSON_H

#include<iostream>
using namespace std;
class person
{
	
private:
	int age;
	char name[20];
	char city[20];
	
public:
	static int count;
	person();
	person(char*, int, char*);
	
	void accept();
	void display();
	static int getcount();

};
#endif