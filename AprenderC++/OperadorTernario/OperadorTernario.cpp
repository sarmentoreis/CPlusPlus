#include <iostream>
#include <string>

int main()
{

	int n1;
	std::cout << "Entre com um numero: ";
	std::cin >> n1;
	std::string Valor;

	//Exemplo operador ternário.
	n1 > 0 ? std::cout << "e maior que 0\n" : std::cout << "e menor que 0\n";

	//Atribuindo valor, operador ternário.
	Valor = (n1 > 0) ? "e maior que 0\n" : "e menor que 0\n";
	std::cout << Valor;

	//Outros exemplos:
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;

	std::cout << "Maior numero: " << MaiorNumero << std::endl;




	return 0;

}