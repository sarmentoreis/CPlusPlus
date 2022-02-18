#pragma once
#include <iostream>
#include <string>


/*Este � o arquivo.h, � onde existem apenas as declara��es dos atributos e m�todos da classe.
* Aqui n�o existem as defini��es/implementa��es das fun��es, pois isso ser� feito no arquivo .cpp. 
* � a separa��o do O QU� (.h) do COMO (.cpp). 
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
