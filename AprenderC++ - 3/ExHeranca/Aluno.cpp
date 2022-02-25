#include "Aluno.h"

std::string Aluno::GetCurso()
{
	return this->Curso;
}

void Aluno::SetCurso(std::string Curso)
{
	this->Curso = Curso;
}

void Aluno::RealizarProva()
{
	std::cout << "\nProva realizada.\n";
}

void Aluno::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Curso: " << GetCurso() << '\n';
}
