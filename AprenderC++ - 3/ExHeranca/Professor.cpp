#include "Professor.h"

std::string Professor::GetDepartamento()
{
	return this->Departamento;
}

void Professor::SetDepartamento(std::string Departamento)
{
	this->Departamento = Departamento;
}

void Professor::EfetuarChamada()
{
	std::cout << "\nChamada efetuada.\n";
}

void Professor::EntregarPauta()
{
	std::cout << "\nPauta entregue.\n";
}

void Professor::MostrarDados()
{
	//Chamando o método da classe base.
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << '\n';
}
