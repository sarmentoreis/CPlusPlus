#pragma once
#include <iostream>
#include <string>
#include <iomanip>


struct Pessoa
{
	std::string Nome;
	int Idade;
	float Peso;
	float Altura;
};

void ConsultaDados(Pessoa Dados)
{
	std::cout << "\n\t*** Dados ***\n" << '\n';
	std::cout << "Nome: " << Dados.Nome << '\n';
	std::cout << "Idade: " << Dados.Idade << '\n';
	std::cout << "Peso: " << std::fixed << std::setprecision(2) << Dados.Peso << "kg" << '\n';
	std::cout << "Altura: " << std::fixed << std::setprecision(2) << Dados.Altura << "m" << '\n';
}