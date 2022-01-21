#include <iostream>
#include <tchar.h>



int main()
{
	//Função que configura o console windows para mostrar acentos.
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declaração de variáveis
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "**********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da variavel NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da variavel Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n";
	std::cout << "Endereço que NumVidas ocupa na Memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação ocupa na Memória RAM: " << &Pontuacao << "\n";
	std::cout << "**********************************" << std::endl;

	std::cout << "**********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150; //Pontuacao += 150
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "**********************************" << std::endl;

	system("PAUSE");
	return 0;
}