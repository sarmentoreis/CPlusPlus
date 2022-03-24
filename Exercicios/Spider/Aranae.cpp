#include "Aranae.h"
#include <iostream>

Aranae::Aranae()
{
	this->pernas = 8;
	this->tamanho = 6.0f;
	this->bTecedeira = true;
	this->veneno = 5;
	this->bNociva = true;
}

Aranae::Aranae(int pernas, float tamanho, bool bTecedeira, int rank, bool bNociva)
{
	this->pernas = pernas;
	this->tamanho = tamanho;
	this->bTecedeira = bTecedeira;
	this->veneno = rank;
	this->bNociva = bNociva;
}

Aranae::~Aranae()
{
	std::cout << "Destrutor ~Aranae() chamado";
}

void Aranae::SetPernas(int qtdPernas)
{
	this->pernas = qtdPernas;
}

void Aranae::SetTamanho(int tamanho)
{
	this->tamanho = tamanho;
}

void Aranae::SetBTecedeira(bool isTecedeira)
{
	this->bTecedeira = isTecedeira;
}

void Aranae::SetVeneno(int rank)
{
	this->veneno = rank;
}

void Aranae::SetBNociva(bool isNociva)
{
	this->bNociva = isNociva;
}

std::string Aranae::GetOrdem()
{
	return this->ordem;
}

int Aranae::GetPernas()
{
	return this->pernas;
}

float Aranae::GetTamanho()
{
	return this->tamanho;
}

bool Aranae::IsTecedeira()
{
	return this->bTecedeira;
}

int Aranae::GetVeneno()
{
	return this->veneno;
}

bool Aranae::IsNociva()
{
	return this->bNociva;
}
