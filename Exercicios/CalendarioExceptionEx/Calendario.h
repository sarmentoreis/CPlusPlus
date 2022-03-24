#pragma once

struct Calendario
{
	int dia;
	int mes;
	int ano;
};

void nextDay(Calendario* date)
{
	if (date->mes == 2)
	{
		if (date->dia >= 28)
		{
			throw "Último dia desse mês.";
		}
	}
	else if (date->mes == 1 || date->mes == 3 || date->mes == 5 || date->mes == 7 
		|| date->mes == 8 || date->mes == 10 || date->mes == 12)
	{
		if (date->dia == 31)
		{
			throw "Último dia desse mês.";
		}

	}
	else if (date->dia == 30)
	{
		throw "Último dia desse mês.";
	}

	date->dia++;
	
}

void showDate(Calendario date)
{
	if (date.dia < 10)
	{
		std::cout << "0" << date.dia;
	}
	else
	{
		std::cout << date.dia;
	}

	if (date.mes < 10)
	{
		std::cout << "/0" << date.mes << "/" << date.ano;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "/" << date.mes << "/" << date.ano;
		std::cout << std::endl;
	}

}

void nextMonth(Calendario* date)
{
	if (date->mes == 12)
	{
		date->mes = 1;
	}
	else
	{
		date->mes++;
	}
}

