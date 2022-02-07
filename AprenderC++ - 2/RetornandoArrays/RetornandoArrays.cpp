#include <iostream>

//Protótipos
//Recebe um array por referência através de um ponteiro, ou seja, a variável *Array irá receber 
//um endereço de memória de um vetor que será enviado para esta função (DuplicaVetor).
void DuplicaVetor(int* Array, int Tamanho);

//Esta função recebe um Array via ponteiro mas também retorna um ponteiro que neste caso deve ser um ponteiro
//para int. Logo será capaz de devolver um ponteiro para int no caso um array (o primeiro elemento). 
int* InvertVetor(int* Array, int Tamanho);

//Mostra o vetor recebido via ponteiro.
void MostraVetor(int* Array, int Tamanho);

int main()
{
	int Numeros[]{ 1,2,3,4,5,6,7,8,9,10 };
	int Tamanho = sizeof(Numeros) / sizeof(int);

	//Passando o endereço do elemento 0 (no entanto isso é realizado implicitamente).
	MostraVetor(&Numeros[0], Tamanho);
	DuplicaVetor(&Numeros[0], Tamanho);
	MostraVetor(&Numeros[0], Tamanho);

	//Aqui MostrarVetor, recebe o retorno da função InvertValor e este retorno será o endereço
	//do primeiro elemento do array invertido.
	MostraVetor(InvertVetor(&Numeros[0], Tamanho), Tamanho);


	return 0;
}

void DuplicaVetor(int* Array, int Tamanho)
{
	//Função percorre o vetor e duplica os valores.
	for (int i = 0; i < Tamanho; i++)
	{
		Array[i] = 2 * Array[i];
	}
}

//Esta função recebe o endereço do primeiro elemento do array e devolve um array invertido.
//Ele precisa ser static pois senão ao sair da função ele irá desaparecer da memória.
int* InvertVetor(int* Array, int Tamanho)
{
	static int ArrayInvertido[10];
	for (int i = (Tamanho-1), j = 0; i >= 0; i--, j++)
	{
		ArrayInvertido[j] = Array[i];
	}

	//Assim como é recebido o ponteiro do primeiro elemento, é enviado o endereço do primeiro elemento.
	return &ArrayInvertido[0];
}

void MostraVetor(int* Array, int Tamanho)
{
	std::cout << "[ ";
	for (int i = 0; i < Tamanho; i++)
	{
		std::cout << Array[i] << " ";
	}
	std::cout << " ]" << std::endl;
}
