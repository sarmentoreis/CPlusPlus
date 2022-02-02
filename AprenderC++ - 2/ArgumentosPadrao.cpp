#include <iostream>

//Protótipo de funções
//Para colocar um valor padrão, basta colocar = (conforme abaixo).
void Coordenadas(int x = 5, int y = 4, int z = 3);

int main()
{

	Coordenadas();

	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;

	std::cout << "(" << x << " - " << y << " - " << z << ")";
}