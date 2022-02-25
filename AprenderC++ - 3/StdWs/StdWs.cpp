#include <iostream>
#include <string>

int main()
{
	std::string str1;
	std::string str2;

	setlocale(LC_ALL, "PORTUGUESE");

	std::cout << "Insira alguns espaços em branco seguidos de uma frase: \n";
	std::getline(std::cin >> std::ws, str1);
	std::cout << "Insira alguns espaços em branco seguidos de uma frase: \n";
	std::getline(std::cin >> std::ws, str2);

	std::cout << "Você escreveu: " << std::endl << str1 << std::endl << str2 << std::endl;

	return 0;
}