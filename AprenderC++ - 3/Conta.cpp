#include "Conta.h"
#include <iostream>
#include <string>

Conta::Conta()
{
	this->Banco = "";
	this->Agencia = 0;
	this->NumConta = 0;
	this->Titular = "";
	this->Saldo = 0.0;

	std::cout << "\nConstrutor objeto endereco " << this << " executado\n";
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;

	std::cout << "\nConstrutor objeto endereco " << this << " executado\n";
}

/*
Aqui o operador escopo (::) está indicando que a função sacar pertence a classe Conta
e que este código a seguir vai implementar a função Sacar.
*/
bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$ " << ConsultarSaldo() << std::endl;
		return false;
	}
	else
	{
		Saldo -= Valor;
		std::cout << "\nSaque realizado: R$ " << Valor << std::endl;
		std::cout << "Seu saldo atual: R$ " << ConsultarSaldo() << std::endl;
		return true;
	}

}

Conta::~Conta()
{
	std::cout << "\nDestrutor objeto endereco " << this << " executado\n";
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	std::cout << "\nDeposito realizado: R$ " << Valor << std::endl;
	std::cout << "Seu saldo atual: R$ " << ConsultarSaldo() << std::endl;

}

void Conta::Transferir(Conta& Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$ " << ConsultarSaldo() << std::endl;
	}
	else
	{
		std::cout << "\nTransferencia realizada, valor: R$ " << Valor << std::endl;
		std::cout << "\n\nTitular: " << Destino.GetTitular() << '\n'
			<< "Banco: " << Destino.GetBanco() << '\n'
			<< "Agencia: " << Destino.GetAgencia() << '\n'
			<< "Conta: " << Destino.GetNumConta() << '\n';
		Destino.Depositar(Valor);
		Saldo -= Valor;

	}
}

double Conta::ConsultarSaldo()
{

	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nThis contem dentro o endereco: " << this << '\n';
}

void Conta::SetBanco(std::string Banco)
{
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}