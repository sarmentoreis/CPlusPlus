#pragma once
#include <iostream>

class Pessoa
{
public:
	Pessoa() : Nome(""), Cpf(""), Matricula(0){}

	Pessoa(std::string Nome, std::string Cpf, int Matricula)
	{
		this->Nome = Nome;
		this->Cpf = Cpf;
		this->Matricula = Matricula;
	}

	/*
	* Opção de criação de construtor
	* Pessoa(std::string Nome, std::string Cpf, int Matricula): this->Nome(Nome), this->Cpf(Cpf), 
	* this->Matricula(Matricula){}
	*/

	std::string GetNome();
	std::string GetCpf();
	int GetMatricula();
	void AcessarSistema();
	void SetNome(std::string Nome);
	void SetCpf(std::string Cpf);
	void SetMatricula(int Matricula);
	void MostrarDados();


private:
	std::string Nome;
	std::string Cpf;
	int Matricula;
};

