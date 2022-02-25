#include <iostream>

typedef int inteiro;
typedef char caractere;
typedef float real;

typedef struct Livro
{
	int Id;
	float Preco;
	std::string Titulo;
	std::string Editora;
} RegistroLivro; // Alias, apelido...

int main()
{
	inteiro Numero{ 12 };
	caractere Letra{ 'A' };
	float Nota{ 2.3f };
	real Media{ 7.0f };

	Livro Livro01;
	RegistroLivro Livro02;

	Livro02.Id = 1;
	Livro02.Titulo = "Titulo";
	Livro02.Preco = 33.99;
	Livro02.Editora = "Editora";

	std::cout << Numero << '\n';
	std::cout << Letra << '\n';
	std::cout << Nota << '\n';
	std::cout << Media << '\n';

	std::cout << "\n" << Livro02.Id << " " << Livro02.Titulo << " " << Livro02.Preco << " " << Livro02.Editora << '\n';

	return 0;
}