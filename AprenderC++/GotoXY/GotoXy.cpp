#include <iostream>
#include <windows.h>

COORD GotoXY(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hConsole, pos);

	return pos;

}

int main()
{
	COORD Posicao;
	Posicao = GotoXY(5, 5);
	std::cout << "TEXTO POSICIONADO";
	Posicao = GotoXY(5, 6);
	std::cout << "Texto foi deslocado " << Posicao.X << " (De largura ou coluna) e " << Posicao.Y << " (De altura ou linha)" << '\n';
	system("PAUSE");
	return 0;
}
