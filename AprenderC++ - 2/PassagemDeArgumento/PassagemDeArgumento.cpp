#include <iostream>

//Agora a função terá dois parâmetros que serão referências dos argumentos passados para esta função.
void TrocaNumeros(int& Num1, int& Num2);

int main()
{

	int Numero1, Numero2;

	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o primeiro numero: " << '\n';
	std::cin >> Numero1;
	std::cout << "Digite o segundo numero: " << '\n';
	std::cin >> Numero2;

	std::cout << "\nValores antes da troca\n";

	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	

	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois da troca\n";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << '\n';


	return 0;
}

//Agora Num1 e Num2 não recebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam
//a ser referências de Numero1 e Numero2 respectivamente.
void TrocaNumeros(int& Num1, int& Num2)
{

	std::cout << "\nEndereço de memória de Num1 da função = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função = " << &Num2 << '\n';


	int Temp{ Num1 };
	Num1 = Num2;
	Num2 = Temp;

}
