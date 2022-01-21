#include <iostream>
#include <tchar.h>



int main()
{
	//Fun��o que configura o console windows para mostrar acentos.
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declara��o de vari�veis
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "**********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da variavel NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da variavel Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n";
	std::cout << "Endere�o que NumVidas ocupa na Mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o ocupa na Mem�ria RAM: " << &Pontuacao << "\n";
	std::cout << "**********************************" << std::endl;

	std::cout << "**********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150; //Pontuacao += 150
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "**********************************" << std::endl;

	system("PAUSE");
	return 0;
}