#include <iostream>
#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{

	Professor Obj;
	Aluno Obj2;
	Bibliotecario Obj3;
	Obj.SetNome("Leonardo");

	//Utilizando construtores
	Professor Prof1("Professor", "000.000.000-00", 12345, "TI");
	Aluno Aluno1("Aluno", "111.111.111-11", 54321, "Desenvolvimento de Software");
	Bibliotecario Biblio1("Bibliotecario", "222.222.222-22", 34215);

	Prof1.MostrarDados();
		std::cout << std::endl;
	Aluno1.MostrarDados();
		std::cout << std::endl;
	Biblio1.MostrarDados();
		std::cout << std::endl;



	return 0;
}