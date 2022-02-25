#include "Pessoa.h"
#include <iostream>

void Pessoa::AcessarSistema()
{
	std::cout << "****Acesso ao sistema concedido****";
}

void Pessoa::SetNome(std::string Nome)
{
	this->Nome = Nome;
}

void Pessoa::SetCpf(std::string Cpf)
{
	this->Cpf = Cpf;
}

void Pessoa::SetMatricula(int Matricula)
{
	this->Matricula = Matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "***** Dados *****" << '\n';
	std::cout << "Nome: " << GetNome() << '\n';
	std::cout << "Cpf: " << GetCpf() << '\n';
	std::cout << "Matricula: " << GetMatricula() << '\n';
}

std::string Pessoa::GetNome()
{
	return this->Nome;
}

std::string Pessoa::GetCpf()
{
	return this->Cpf;
}

int Pessoa::GetMatricula()
{
	return this->Matricula;
}
