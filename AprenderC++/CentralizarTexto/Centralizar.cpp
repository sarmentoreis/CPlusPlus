#include <iostream>
#include <string>
#include <iomanip>



int main()
{
	int Numero1, Numero2;
	//std::string = (qtdDeCaracteres, caracter) - no caso abaixo, 30 espa�os.
	std::cout << std::string(30, ' ') << "Digite o primeiro numero: ";
	std::cin >> Numero1;
	std::cout << std::string(30, ' ') << "Numero1 = " << Numero1 << std::endl;
	std::cout << std::string(30, ' ') << "Digite o segundo numero: ";
	std::cin >> Numero2;
	std::cout << std::string(30, ' ') << "Numero2 = " << Numero2 << std::endl;

	std::cout << "##-Funcao setw-##" << "\n";
	/*Observe que no c�digo abaixo queremos colocar na tela as letras ABCDEFGHIJ que possui 10 caracteres.
	Ocorre que se fizermos setw(10) n�o desloca nada, pois voc� definiu que o campo deve ter a largura de 10
	caracteres, ou seja que o campo de sa�da do fluxo de cout deve ter tamanho 10. Mas ABCDEFGHIJ j� tem 10
	de largura/tamanho.Logo a sa�da n�o desloca nada pois o texto vai se encaixar nesta largura de
	tamanho 10 e n�o sobra nada.*/

	std::cout << std::setw(10) << "ABCDEFGHIJ" << "\n";
	//Com 20
	std::cout << std::setw(20) << "ABCDEFGHIJ" << "\n";


	system("PAUSE");
	return 0;
}
