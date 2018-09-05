#include"person.h"
#include"employee.h"
void employee::setBasic(int basic)
{
	this->basic = basic;
}
int employee::getBasic()
{
	return this->basic;
}
employee::employee()
{
	this->basic = 0;
	count++;
}