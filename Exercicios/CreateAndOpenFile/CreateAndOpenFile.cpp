#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string nomeArquivo;

	std::cout << "Entre com o nome do arquivo de texto: ";
	std::getline(std::cin, nomeArquivo);
	std::string caminho = "C:/Users/lreis/Desktop/";
	caminho.append(nomeArquivo + ".txt");
	std::ofstream arquivo(caminho);

	std::cout << "Arquivo criado no caminho -> " << caminho << " sob nome de: " << '\n' <<
		nomeArquivo << '\n';

	std::string nota;
	std::cout << "Texto a ser inserido no arquivo: ";
	std::getline(std::cin, nota);
	arquivo << nota << std::endl;
	arquivo.close();

	std::cout << '\n' << "\n-|Abrindo o arquivo criado|-\n" << '\n';

	std::ifstream file;
	file.open(caminho);
	if (file.is_open())
	{
		std::string copia;
		while (std::getline(file, copia))
		{
			std::cout << copia << '\n';
		}
	}

	return 0;
}