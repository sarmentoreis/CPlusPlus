#pragma once
#include "Pessoa.h"
class Professor :
    public Pessoa
{
public:

    Professor() {}
    Professor(std::string NomeProf, std::string CpfProf, int MatriculaProf, std::string Depto): 
        Pessoa(NomeProf, CpfProf, MatriculaProf), Departamento(Depto) {}
    //Acima est� sendo chamado o construtor da classe base (superclass) para inicar os par�metros
    //do objeto professor

    std::string GetDepartamento();
    void SetDepartamento(std::string Departamento);
    void EfetuarChamada();
    void EntregarPauta();
    void MostrarDados();

private:
    std::string Departamento;
};

