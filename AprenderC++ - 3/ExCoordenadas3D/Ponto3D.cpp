#include <iostream>

struct Ponto3D
{
	int X;
	int Y;
	int Z;

	void DesenharPonto3D(Ponto3D Pontos)
	{
		std::cout << "X:" << Pontos.X << " " << "Y:" << Pontos.Y << " " "Z:" << Pontos.Z << '\n';
	}

};

int main()
{
	Ponto3D Ponto1;
	Ponto1.X = 3;
	Ponto1.Y = 4;
	Ponto1.Z = 5;

	Ponto1.DesenharPonto3D(Ponto1);
	

	return 0;
}