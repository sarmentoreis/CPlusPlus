#include "Metodos.h"
#include <iostream>
#include <iomanip>
#include <numbers>



const long double Pi = std::numbers::pi;

double CalculaAreaCirculo(double raio)
{

	return Pi * std::pow(raio,2);
}

double CalculaPerimetroCirculo(double raio)
{

	return 2 * Pi * raio;
}

double CalculaDiametroCirculo(double raio)
{
	return 2 * raio;
}

double CalculaVolumeEsfera(double raio)
{
	return 4 * Pi * std::pow(raio, 3) / 3;
}

int CalculaDias(int anos)
{
	return anos * 365;
}

int HorasToMinutos(int horas, int minutos)
{
	return (horas * 60) + minutos;
}

int MinutosToSegudos(int horas, int minutos)
{
	return (horas * 3600) + (minutos * 60);
}

float CelsiusToFahren(float celsius)
{

	return (celsius * 9/5) + 32;
}

float FahrenToCelsius(float fahren)
{
	return (fahren - 32) * 5/9;
}
