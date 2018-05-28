#include "Report.h"

void Report::insert(Manager temp, int index)
{
	manager[index] = temp;
}

void Report::insert(Technician temp, int index)
{
	technician[index] = temp;
}

void Report::insert(Salesperson temp, int index)
{
	salesperson[index] = temp;
}

void Report::print()
{
	int i = 0;
	
}