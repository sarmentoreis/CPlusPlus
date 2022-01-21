#include <iostream>
#include "rlutil.h"

int main()
{
	gotoxy(15, 5);
	std::cout << "TEXTO POSICIONADO";
	gotoxy(15, 6);
	system("PAUSE");
	return 0;
}