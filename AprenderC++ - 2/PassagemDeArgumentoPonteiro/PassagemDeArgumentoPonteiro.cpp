#include <iostream>

//A passagem de argumentos para a função por referência, só que agora utilizando ponteiros.
//Aqui foi indicado que a função deve receber endereços de memória.
void TrocaNumeros(int* Num1, int* Num2);

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



	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nValores depois da troca\n";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << '\n';


	return 0;
}


void TrocaNumeros(int* Num1, int* Num2)
{

	std::cout << "\nEndereço de memória de Num1 da função = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função = " << &Num2 << '\n';


	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;

}
