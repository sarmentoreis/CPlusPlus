#include <iostream>



int main()
{

	//Leonardo Felipe Sarmento dos Reis

	/*
		O c�digo abaixo, exibe na sa�da padr�o (tela) a frase "EU VOU APRENDER C++".
		Para pular as linhas foram utilizadas a fun�ao "endl" e a sequ�ncia de escape "\n".
	*/

	//Exemplo 1�

	std::cout << "EU" << std::endl;
	std::cout << "VOU\n";
	std::cout << "APRENDER\n";
	std::cout << "C++" << std::endl;

	//Exemplo 2�

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