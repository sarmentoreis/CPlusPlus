#include <iostream>



int main()
{

	//Leonardo Felipe Sarmento dos Reis

	/*
		O código abaixo, exibe na saída padrão (tela) a frase "EU VOU APRENDER C++".
		Para pular as linhas foram utilizadas a funçao "endl" e a sequência de escape "\n".
	*/

	//Exemplo 1°

	std::cout << "EU" << std::endl;
	std::cout << "VOU\n";
	std::cout << "APRENDER\n";
	std::cout << "C++" << std::endl;

	//Exemplo 2°

	std::cout
		<< "\nEU" << std::endl
		<< "VOU" << "\n"
		<< "APRENDER\n"
		<< "C++" << std::endl;
	

	//Comando para "setar" a COR do FUNDO/FONTE do shell.
	system("COLOR F0");
	

	system("PAUSE");


	return 0;
}