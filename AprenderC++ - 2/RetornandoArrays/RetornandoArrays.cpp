#include <iostream>

//Prot�tipos
//Recebe um array por refer�ncia atrav�s de um ponteiro, ou seja, a vari�vel *Array ir� receber 
//um endere�o de mem�ria de um vetor que ser� enviado para esta fun��o (DuplicaVetor).
void DuplicaVetor(int* Array, int Tamanho);

//Esta fun��o recebe um Array via ponteiro mas tamb�m retorna um ponteiro que neste caso deve ser um ponteiro
//para int. Logo ser� capaz de devolver um ponteiro para int no caso um array (o primeiro elemento). 
int* InvertVetor(int* Array, int Tamanho);

//Mostra o vetor recebido via ponteiro.
void MostraVetor(int* Array, int Tamanho);

int main()
{
	int Numeros[]{ 1,2,3,4,5,6,7,8,9,10 };
	int Tamanho = sizeof(Numeros) / sizeof(int);

	//Passando o endere�o do elemento 0 (no entanto isso � realizado implicitamente).
	MostraVetor(&Numeros[0], Tamanho);
	DuplicaVetor(&Numeros[0], Tamanho);
	MostraVetor(&Numeros[0], Tamanho);

	//Aqui MostrarVetor, recebe o retorno da fun��o InvertValor e este retorno ser� o endere�o
	//do primeiro elemento do array invertido.
	MostraVetor(InvertVetor(&Numeros[0], Tamanho), Tamanho);


	return 0;
}

void DuplicaVetor(int* Array, int Tamanho)
{
	//Fun��o percorre o vetor e duplica os valores.
	for (int i = 0; i < Tamanho; i++)
	{
		Array[i] = 2 * Array[i];
	}
}

//Esta fun��o recebe o endere�o do primeiro elemento do array e devolve um array invertido.
//Ele precisa ser static pois sen�o ao sair da fun��o ele ir� desaparecer da mem�ria.
int* InvertVetor(int* Array, int Tamanho)
{
	static int ArrayInvertido[10];
	for (int i = (Tamanho-1), j = 0; i >= 0; i--, j++)
	{
		ArrayInvertido[j] = Array[i];
	}

	//Assim como � recebido o ponteiro do primeiro elemento, � enviado o endere�o do primeiro elemento.
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
