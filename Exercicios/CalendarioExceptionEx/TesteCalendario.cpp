#include <iostream>
#include "Calendario.h"


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	Calendario d1,d2;
	d1.dia = 9;
	d1.mes = 9;
	d1.ano = 1995;

	showDate(d1);
	
	try
	{
		nextMonth(&d1);
		nextDay(&d1);
	}
	catch (const char* msg)
	{
		std::cerr << msg << std::endl;
	}

	showDate(d1);
	std::cout << '\n' << std::endl;
	d2.dia = 25;
	d2.mes = 10;
	d2.ano = 1995;
	showDate(d2);

	return 0;
}