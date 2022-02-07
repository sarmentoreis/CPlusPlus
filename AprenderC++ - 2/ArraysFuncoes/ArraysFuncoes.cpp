#include <iostream>
#include <array>

void MostrarVetor(int Array[], int Tamanho);
void AlterarVetor(int Array[], int Tamanho);

int main()
{
	int Vetor[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//Opção abaixo genérica, pega o tamanho do vetor (10) porém ele retorna em bytes, portanto como 1 int vale
	//4bytes, 10*4 = 40. Nesse caso precisa dividir o valor de int (4bytes) pelo tamanho do vetor.
	//int TamanhoVetor = sizeof(Vetor)/sizeof(int);

	int TamanhoVetor = std::size(Vetor);

	std::cout << "Tamanho do vetor: " << TamanhoVetor << std::endl;

	std::cout << "\nVetor ORIGINAL";
	MostrarVetor(Vetor,TamanhoVetor);
	AlterarVetor(Vetor, TamanhoVetor);
	std::cout << "\nVetor ALTERADO";
	MostrarVetor(Vetor, TamanhoVetor);
	//O vetor foi alterado, o que indica que os vetores são enviados para as funções por referência.

	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vetor[0] 
	/*Ou seja, ao escrever o nome de um vetor sem os colchetes é o mesmo 
	* que escrever o endereço de memória do primeiro elemento do vetor.
	*/


	return 0;
}

//Portanto, int Array[] indica que isso, na realidade, é um ponteiro.
void MostrarVetor(int Array[], int Tamanho)
{
	
	for (int i = 0; i < Tamanho; i++)
	{
		std::cout << " " << Array[i];
	}
	std::cout << std::endl << std::endl;

}

void AlterarVetor(int Array[], int Tamanho)
{
	for (int i = 0; i < Tamanho; i++)
	{
		Array[i] = Array[i] * 2;
	}

	//Array[i] é o mesmo que *(Array[] + i);
}
