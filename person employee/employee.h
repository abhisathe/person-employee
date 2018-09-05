#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"person.h"
class employee : public person
{

	int empid;
	double basic;
public:
	employee();
	void setBasic(int);
	int getBasic();
};
#endif