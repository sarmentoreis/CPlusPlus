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
	/*Criação e instanciação de um objeto via alocação dinâmica de memória, utilizando ponteiros.
	Ou seja, será criado um objeto baseado na classe Casa e o endereço de memória deste objeto será colocado
	em CasaDePraia.
	*/
	

	//Para acessar o conteúdo, é necessário realizar o desreferenciamento com o '*'.
	//Abaixo:

	std::cout << "\nNumero de quartos: " <<  (*CasaDePraia).ObtenhaNumDeQuartos() << '\n';
	std::cout << "Tem suite? ";
	(*CasaDePraia).TemSuite() ? std::cout << "Sim" : std::cout << "Nao" << '\n';
	(*CasaDePraia).SetNumQuartos(2);
	std::cout << "\nNumero de quartos: " << CasaDePraia -> ObtenhaNumDeQuartos() << '\n';

	/*OBSERVAÇÃO!
	* TUDO É NOTAÇÃO PONTO .
	* Quando digitar:
	* 
	* CasaDePraia -> SetNumQuartos(5);
	* 
	* é o mesmo que:
	* 
	* (*CasaDePraia).SetNumQuartos(5);	
	* 
	* é apenas um tipo de notação (notação flecha).
	*/


	return 0;
}


//O operador escopo nesse caso indica que o método MostraTamanho() pertence
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