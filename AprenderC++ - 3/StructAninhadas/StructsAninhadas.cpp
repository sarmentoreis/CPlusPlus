#include <iostream>
#include <cstring>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};

struct Pessoa
{
	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;
};

int main()
{
	Pessoa Pessoa01;
	Pessoa01.Nome = "Leonardo";
	Pessoa01.DtNascimento.Dia = 1;
	Pessoa01.DtNascimento.Mes = 2;
	Pessoa01.DtNascimento.Ano = 3;
	Pessoa01.Endereco.Rua = "Rua 1";
	Pessoa01.Endereco.Cidade = "Cidade 1";
	Pessoa01.Endereco.Estado = "Estado 1";
	Pessoa01.Endereco.Pais = "Pais 1";

	std::cout << "Nome: " << Pessoa01.Nome << '\n';
	std::cout << "Data de nascimento: " << Pessoa01.DtNascimento.Dia << "/" << Pessoa01.DtNascimento.Mes <<
		"/" << Pessoa01.DtNascimento.Ano << '\n';
	std::cout << "\n-Endereco-\n\n";

	std::cout << Pessoa01.Endereco.Rua << '\n' <<
		Pessoa01.Endereco.Cidade << '\n' <<
		Pessoa01.Endereco.Estado << '\n' <<
		Pessoa01.Endereco.Pais << '\n';




	return 0;
}