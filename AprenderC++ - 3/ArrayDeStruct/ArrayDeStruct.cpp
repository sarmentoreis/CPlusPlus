#include <iostream>
#include <string>

struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
	std::string Ano;

};/*aqui n�o existir� cria��o de nada na mem�ria RAM, isso ou esta struct � apenas um modelo para
cria��o de outras vari�veis quando for criada uma variavel do tipo desta struct, o compilador ir� usar
este molde, este modelo para arrumar e armazenar dados na mem�ria RAM*/



int main()
{
	Livro livro[5];

	std::cout << "*** Cadastro de Livro ***" << '\n';

	for (int i = 0; i < 5; i++)
	{
		std::cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
		std::cout << "\nLivro - " << (i+1) << '\n';
		std::cout << "\nDigite ID do livro: ";
		std::cin >> livro[i].ID;

		std::cout << "\nDigite o titulo do livro: ";
		std::cin.ignore();
		std::getline(std::cin, livro[i].Titulo);

		std::cout << "\nDigite o autor do livro: ";
		std::getline(std::cin, livro[i].Autor);

		std::cout << "\nDigite a editora do livro: ";
		std::getline(std::cin, livro[i].Editora);

		std::cout << "\nDigite o ano do livro: ";
		std::getline(std::cin, livro[i].Ano);
		system("CLS");


		std::cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
		std::cout << "\nID: " << livro[i].ID << '\n';
		std::cout << "Titulo: " << livro[i].Titulo << '\n';
		std::cout << "Autor: " << livro[i].Autor << '\n';
		std::cout << "Editora: " << livro[i].Editora << '\n';
		std::cout << "Ano: " << livro[i].Ano << '\n';
	}
	


	return 0;
}