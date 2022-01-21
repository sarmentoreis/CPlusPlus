#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE); // Aqui voc� obtem a janela de Console e coloca em screen um endere�o para manipular(HANDLE) esta janela.
	COORD max_size = GetLargestConsoleWindowSize(screen);
	//max_size ter� as coordenadas X (Largura) e Y (Altura)
	//Ent�o max_size.X ser� a Largura e max_size.Y ser� a altura
	//Precisamos apenas da Largura
	string str = "Texto Centralizado";
	int LarguraConsole = max_size.X; // Largura do seu console obtida automaticamente.
	int Tamanho = str.length(); // Tamanho da String.
	if (Tamanho % 2 == 0)
	{
		str += " ";
	}
	cout << setw((LarguraConsole / 2) + Tamanho / 2) << right << str << endl;
	system("PAUSE");

}