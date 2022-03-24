#pragma once
#include "Aranae.h"
class Mesothelae :
    public Aranae
{

private:
    std::string segmentacao;
    std::string queliceras;
    int pulmoes;
    int fieiras;

public:
    Mesothelae();
    Mesothelae(float tamanho, bool bTecedeira, int rank, bool bNociva, std::string segmentacao, 
        std::string queliceras, int pernasMeso = 10) :
            Aranae(pernasMeso, tamanho, bTecedeira, rank, bNociva)
    {
        this->segmentacao = segmentacao;
        this->queliceras = queliceras;
        this->pulmoes = 2;
        this->fieiras = 4;
    }
};

