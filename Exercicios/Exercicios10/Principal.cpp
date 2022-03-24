#include "Funcao.h"
#include <iostream>


int main()
{
	/*Ex - Adivinha número!
	* Gere um número aleatório inteiro (utilize a função rand() ) entre 0 e 100 e solicite um
	  número ao usuário. O objetivo é que o usuário acerte o número gerado. Se o número digitado
	  for menor que o gerado, diga “MAIOR”, se for maior diga “MENOR”, e solicite um número
	  ao usuário novamente. Repita este processo até que o usuário acerte o número gerado. Após
	  isso, informe em quantas tentativas o usuário acertou. 
	*/
	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "\t*--* Adivinha número *--*\n";

	int NumeroGerado = GeraNumero();
	int Chute{};
	int Tentativas{ 1 };
	std::cout << "Um número foi gerado no sistema. Tente adivinhá-lo!\n";
	system("PAUSE");
	while (Chute != NumeroGerado)
	{
		system("CLS");
		std::cout << "Tentativa " << Tentativas << '\n';
		std::cout << "Digite um número: ";
		std::cin >> Chute;
		Tentativas++;
		VerificaNumero(NumeroGerado, Chute);
		system("PAUSE");
	}
	

	return 0;
}