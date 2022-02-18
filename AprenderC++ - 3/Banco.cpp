#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Inicio do primeiro escopo para visualizar o destrutor sendo executado.
	{

		//Criação de objetos da classe Conta armazenados na STACK.
		Conta ContaCliente01("Santander", 1234, 111112, "Leonardo", 14960);
		Conta ContaCliente02;

		std::cout << "Endereco de memoria do objeto ContaCliente01: " << &ContaCliente01 << '\n';
		ContaCliente01.GetEnderecoThis();
		std::cout << "Endereco de memoria do objeto ContaCliente02: " << &ContaCliente02 << '\n';
		ContaCliente02.GetEnderecoThis();

		ContaCliente01.Sacar(1500);

		ContaCliente02.SetBanco("Itau");
		ContaCliente02.SetAgencia(4321);
		ContaCliente02.SetNumConta(222221);
		ContaCliente02.SetTitular("Fulano");

		ContaCliente01.Transferir(ContaCliente02, 2000);
		ContaCliente02.Sacar(500);
		ContaCliente02.Sacar(5000);

	} // Fim do primeiro escopo, destrutor executado.

	return 0;
}