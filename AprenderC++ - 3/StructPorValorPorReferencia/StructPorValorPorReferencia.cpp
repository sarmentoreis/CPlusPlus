#include <iostream>
#include <iomanip>

struct Aluno
{
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;
}Aluno01{11111,"Fulano", "TI", 4, 990.50}; // J� inicializando o objeto na declara��o da struct.

//Prot�tipos de fun��es.
void MostrarDados(Aluno Dados);
void AlterarDados(Aluno& Dados);

int main()
{
	std::cout << "ANTES DE MODIFICAR OS DADOS\n";
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "DEPOIS DE MODIFICAR OS DADOS\n";
	MostrarDados(Aluno01);

	system("PAUSE");
	return 0;
}

void MostrarDados(Aluno Dados)
{
	std::cout << "*************** - Dados do Aluno - ***************\n";
	std::cout << "\t Matricula: " << Dados.Matricula << std::endl;
	std::cout << "\t Nome: " << Dados.Nome << std::endl;
	std::cout << "\t Curso: " << Dados.Curso << std::endl;
	std::cout << "\t Semestre: " << Dados.Semestre << std::endl;
	std::cout << "\t Mensalidade: " << "R$ " <<std::fixed <<std::setprecision(2) << Dados.Mensalidade << std::endl;
	std::cout << "**************************************************\n\n";
}


//Agora altera pois Dados n�o recebe um c�pia, um valor da struct Aluno01, Dados agora � uma refer�ncia para
//Quem for enviada a fun��o AlterarDados. Se � uma refer�ncia, Dados ser� capaz de alterar Aluno01.
void AlterarDados(Aluno& Dados)
{
	Dados.Matricula = 22222;
	Dados.Nome = "Beltrano";
	Dados.Curso = "Engenharia";
	Dados.Semestre = 1;
	Dados.Mensalidade = 870.99;

}
