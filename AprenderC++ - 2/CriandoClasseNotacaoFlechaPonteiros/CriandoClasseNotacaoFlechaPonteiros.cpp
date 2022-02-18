#include <iostream>


class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	
	Casa* CasaDePraia = new Casa();
	/*Cria��o e instancia��o de um objeto via aloca��o din�mica de mem�ria, utilizando ponteiros.
	Ou seja, ser� criado um objeto baseado na classe Casa e o endere�o de mem�ria deste objeto ser� colocado
	em CasaDePraia.
	*/
	

	//Para acessar o conte�do, � necess�rio realizar o desreferenciamento com o '*'.
	//Abaixo:

	std::cout << "\nNumero de quartos: " <<  (*CasaDePraia).ObtenhaNumDeQuartos() << '\n';
	std::cout << "Tem suite? ";
	(*CasaDePraia).TemSuite() ? std::cout << "Sim" : std::cout << "Nao" << '\n';
	(*CasaDePraia).SetNumQuartos(2);
	std::cout << "\nNumero de quartos: " << CasaDePraia -> ObtenhaNumDeQuartos() << '\n';

	/*OBSERVA��O!
	* TUDO � NOTA��O PONTO .
	* Quando digitar:
	* 
	* CasaDePraia -> SetNumQuartos(5);
	* 
	* � o mesmo que:
	* 
	* (*CasaDePraia).SetNumQuartos(5);	
	* 
	* � apenas um tipo de nota��o (nota��o flecha).
	*/


	return 0;
}


//O operador escopo nesse caso indica que o m�todo MostraTamanho() pertence
//a classe Casa.

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;

}

int Casa::ObtenhaNumDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNumero de quartos invalidos.\n";
	}
}