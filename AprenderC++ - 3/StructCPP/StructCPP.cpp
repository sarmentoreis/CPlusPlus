#include <iostream>

struct Data
{
	//Como não foi especificado o modificador de acesso, na struct por padrão será PUBLIC.
	static int Contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	Data()
	{
		id = Contador++;
		std::cout << "Construtor Data(" << id << ") executado." << '\n';
	}
	~Data()
	{
		std::cout << "Destrutor ~Data(" << id << ") executado." << '\n';
	}
};

int Data::Contador{ 1 };

class Data2
{
	//O modificador de acesso na classe, por padrão, será PRIVATE.
public:
	int Dia;
	int Mes;
	int Ano;

//Forma de construtor em C++.
public:
	Data2() : Dia(1), Mes(1), Ano(1) {}
};

int main()
{
	//Forma de inicializar um objeto na struct.
	//Data Agenda{22,07,2013};
	{
		Data Agenda;
		
		{
			Data Agenda2;
			//Objeto criado na HEAP, com ponteiro. Só será deletado com o comando delete.
			Data* Agenda3 = new Data();
			delete(Agenda3);
		}
		

		Data Agenda4;
	}
 
	return 0;
}