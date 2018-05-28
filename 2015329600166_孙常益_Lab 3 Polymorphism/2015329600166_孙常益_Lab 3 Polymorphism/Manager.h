#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

//Manager¿‡
class Manager :public Employee
{
	double bonus;
public:
	double get_pay();
};

#endif