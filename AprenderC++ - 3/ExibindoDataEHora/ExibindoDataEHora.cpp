#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>



int main()
{
	//O tipo de dados time_t é usado para representar o tempo de calendário.
	time_t HoraAtual = time(0);

	/*Função localtime
	 recebe tempo em segundos de uma variável do tipo time_t, converte para o tempo local, armazena os dados
	 na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.*/
	tm* MinhaData = localtime(&HoraAtual);


	std::cout << "Hora: " << MinhaData->tm_hour << ":" << MinhaData->tm_min << ":" << MinhaData->tm_sec << '\n';
	std::cout << "\nDia: " << MinhaData->tm_mday << '\n'
		<< "Mes: " << 1 + MinhaData->tm_mon << '\n'
		<< "Ano: " << 1900 + MinhaData->tm_year << '\n' << std::endl;

	//Outra versão
	time_t OutroTipo = time(NULL);
	std::cout << "----------------Outro tipo de data----------------" << '\n';
	std::cout << ctime(&OutroTipo);
	std::cout << "\n--------------------------------------------------\n";

	system("DATE");
	system("TIME");

	return 0;
}