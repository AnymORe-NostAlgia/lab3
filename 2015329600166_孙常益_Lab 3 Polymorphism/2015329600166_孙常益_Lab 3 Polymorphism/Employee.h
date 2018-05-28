#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
protected:
	double salary;
	double payment;
public:
	virtual double get_pay();
	void setSalary(double i);
};

#endif