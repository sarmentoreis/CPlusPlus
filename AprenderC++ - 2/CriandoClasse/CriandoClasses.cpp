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
	Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	std::cout << "\nNumero de quartos: " << CasaDePraia.ObtenhaNumDeQuartos() << '\n';
	std::cout << "Tem suite? ";
	CasaDePraia.TemSuite() ? std::cout << "Sim" : std::cout << "Nao" << '\n';
	CasaDePraia.SetNumQuartos(2);
	std::cout << "\nNumero de quartos: " << CasaDePraia.ObtenhaNumDeQuartos() << '\n';
	

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
