#include "Funcao.h"
#include <iostream>


int main()
{
	/*Ex - Adivinha n�mero!
	* Gere um n�mero aleat�rio inteiro (utilize a fun��o rand() ) entre 0 e 100 e solicite um
	  n�mero ao usu�rio. O objetivo � que o usu�rio acerte o n�mero gerado. Se o n�mero digitado
	  for menor que o gerado, diga �MAIOR�, se for maior diga �MENOR�, e solicite um n�mero
	  ao usu�rio novamente. Repita este processo at� que o usu�rio acerte o n�mero gerado. Ap�s
	  isso, informe em quantas tentativas o usu�rio acertou. 
	*/
	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "\t*--* Adivinha n�mero *--*\n";

	int NumeroGerado = GeraNumero();
	int Chute{};
	int Tentativas{ 1 };
	std::cout << "Um n�mero foi gerado no sistema. Tente adivinh�-lo!\n";
	system("PAUSE");
	while (Chute != NumeroGerado)
	{
		system("CLS");
		std::cout << "Tentativa " << Tentativas << '\n';
		std::cout << "Digite um n�mero: ";
		std::cin >> Chute;
		Tentativas++;
		VerificaNumero(NumeroGerado, Chute);
		system("PAUSE");
	}
	

	return 0;
}