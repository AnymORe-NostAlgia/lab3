#pragma once
#ifndef SALESPERSON_H
#define SALESPERSON_H
#include "Employee.h"

//Salesperson¿‡
class Salesperson :public Employee
{
	double profit;
public:
	double get_pay();
};

#endif