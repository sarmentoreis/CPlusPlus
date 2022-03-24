#pragma once
#include <string>

class Aranae
{
private:
	std::string ordem{"Aranae"};
	int pernas;
	float tamanho;
	bool bTecedeira;
	int veneno;
	bool bNociva;

public:
	Aranae();
	Aranae(int pernas, float tamanho, bool bTecedeira, int rank, bool bNociva);
	~Aranae();
	void SetPernas(int qtdPernas);
	void SetTamanho(int tamanho);
	void SetBTecedeira(bool isTecedeira);
	void SetVeneno(int rank);
	void SetBNociva(bool isNociva);
	std::string GetOrdem();
	int GetPernas();
	float GetTamanho();
	bool IsTecedeira();
	int GetVeneno();
	bool IsNociva();
};

