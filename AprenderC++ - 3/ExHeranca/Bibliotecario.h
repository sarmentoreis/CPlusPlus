#pragma once
#include "Pessoa.h"
class Bibliotecario :
    public Pessoa
{
public:
    
    Bibliotecario(){}
    Bibliotecario(std::string NomeBibliotecario, std::string CpfBibliotecario, int MatriculaBibliotecario):
        Pessoa(NomeBibliotecario, CpfBibliotecario, MatriculaBibliotecario){}

    void CadastrarLivros();
    void MostrarDados();
};

