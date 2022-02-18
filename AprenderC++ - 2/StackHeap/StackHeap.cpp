#include <iostream>


void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();

/*Vari�vel global ser� armazenada na regi�o de mem�ria destinada
* para v�riaveis est�ticas/globais.
*/
int VarGlobal{ 10 };

int main()
{
	/*
	* A var�avel na main() ser� armazenada na regi�o destinada para vari�veis locais/fun��es (Stack - Pilha).
	* Assim como as demais vari�veis dentro das fun��es, no seu escopo.
	*/

	int VarMain{ 00 };
	Funcao01();

	return 0;
}

void Funcao01()
{
	int Var01{ 01 };

	/*Vari�vel est�tica ser� armazenada na regi�o de mem�ria destinada
	* para v�riaveis est�ticas/globais.
	*/
	static int VarEstatica{ 20 };

	std::cout << "\nChamando Funcao01\n";
	std::cout << "\nEndereco Var01: " << &Var01 << '\n';
	VarEstatica++;
	std::cout << "\nValor VarEstatica: " << VarEstatica << std::endl;
	Funcao02();

}

void Funcao02()
{
	int Var02{ 02 };
	std::cout << "\nChamando Funcao02\n";
	std::cout << "\nEndereco Var02: " << &Var02 << '\n';
	Funcao03();
	
}

void Funcao03()
{
	int Var03{ 03 };
	std::cout << "\nChamando Funcao03\n";
	std::cout << "\nEndereco Var03: " << &Var03 << '\n';
	Funcao04();
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\nChamando Funcao04\n";
	std::cout << "\nEndereco Var04: " << &Var04 << '\n';
}
