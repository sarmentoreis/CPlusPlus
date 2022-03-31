#include <iostream>
#include <fstream>
#include <string>


int main()
{
	std::string nome;
	
	std::cout << "Entre com o nome do arquivo: ";
	std::getline(std::cin, nome);
	std::string caminho = "C:/Users/lreis/Desktop/";
	caminho.append(nome + ".txt");
	std::ofstream outfile(caminho);

	std::cout << "Arquivo criado no caminho -> " << caminho << " sob nome de: " << nome << '\n';

	std::string nota;
	std::cout << "Entre com a nota: ";
	std::getline(std::cin, nota);
	outfile << nota << std::endl;

	outfile.close();

	return 0;
}