#pragma once
#include "Pessoa.h"
class Aluno :
    public Pessoa
{
public:
    
    Aluno(){}
    Aluno(std::string NomeAluno, std::string CpfAluno, int MatriculaAluno, std::string NovoCurso):
        Pessoa(NomeAluno, CpfAluno, MatriculaAluno), Curso(NovoCurso){}

    std::string GetCurso();
    void SetCurso(std::string Curso);
    void RealizarProva();
    void MostrarDados();

private:
    std::string Curso;
};

