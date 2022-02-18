#pragma once
#include <iostream>
#include <string>


/*Este é o arquivo.h, é onde existem apenas as declarações dos atributos e métodos da classe.
* Aqui não existem as definições/implementações das funções, pois isso será feito no arquivo .cpp. 
* É a separação do O QUÊ (.h) do COMO (.cpp). 
*/

class Conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;

public:
	Conta();
	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);
	~Conta();
	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(Conta& Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetNumConta(int NumConta);
	void SetTitular(std::string Titular);



};
