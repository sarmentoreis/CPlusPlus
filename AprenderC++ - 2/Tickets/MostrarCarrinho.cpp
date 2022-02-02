#include <iostream>
#include "MostrarCarrinho.h"


void MostrarCarrinho(float Total, float MeiaEntrada, float InteiraEntrada)
{
	Total = (MeiaEntrada * 10.50) + (InteiraEntrada * 21.0);

	std::cout << "\n***SEU CARRINHO DE COMPRAS***\n";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "[MEIA ENTRADA]:\t\t" << MeiaEntrada << "\t" << "R$ " << MeiaEntrada * 10.50 << "\n";
	std::cout << "[ENTRADA INTEIRA]:\t" << InteiraEntrada << "\t" << "R$ " << InteiraEntrada * 21.0 << "\n";
	std::cout << "[TOTAL]:\t\t" << "\t" << "R$ " << Total << "\n\n\n";
}