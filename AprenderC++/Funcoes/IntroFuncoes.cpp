#include <iostream>


int SomaAUmNumero(int Numero, int NumeroASerSomado)
{

	int SomaDosNumeros;
	SomaDosNumeros = Numero + NumeroASerSomado;

	return SomaDosNumeros;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem...\n";
	return;
	std::cout << "\nMensagem de Marte... Chegamos bem 2...\n"; // <-- Essa linha nunca será executada.
}

int main()
{
	int Numero, NumeroASerSomado;
	Mensagem();
	std::cout << "Digite um numero: " << std::endl;
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << '\n';
	std::cin >> NumeroASerSomado;
	std::cout << "A soma do numero " << Numero << " com o numero " << NumeroASerSomado << " sera: " <<
		SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;



	return 0;
}