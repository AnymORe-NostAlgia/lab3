#ifndef REPORT_H
#define REPORT_H
#include "Employee.h"
#include "Manager.h"
#include "Technician.h"
#include "Salesperson.h"

class Report
{
	Manager manager[10];
	Technician technician[10];
	Salesperson salesperson[10];
public:
	void insert(Manager temp, int index);
	void insert(Technician temp,int index);
	void insert(Salesperson temp,int index);
	void print();
};
#endif