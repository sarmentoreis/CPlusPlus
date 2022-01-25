#include <iostream>
#include <string>


int main()
{
	setlocale(LC_ALL, "portuguese");
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaAcesso)
	{
		std::cout << "\nAcesso Permitido!" << '\n';
		bAcesso = true;
	}
	else
	{
		std::cout << "\nAcesso Negado!" << '\n';
		exit(0); // Função para sair do programa.
	}


	//Operador &&

	bFezSol = bCarroPronto = bSalarioDepositado = true;

	if (bAcesso)
	{
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			std::cout << "Vai dar praia!" << std::endl;
		}
		else
		{
			std::cout << "Não vai dar praia!" << std::endl;
		}
	}

	return 0;
}