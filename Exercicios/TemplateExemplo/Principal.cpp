#include <iostream>

template <class T>
T soma(T num1, T num2)
{
	T resultado;
	resultado = num1 + num2;
	return resultado;
}

template <class Type, int N>
Type fixed_multiply(Type val)
{
	return val * N;
}

int main()
{
	int n1 = 5, n2 = 10;
	double n3 = 2.5, n4 = 4;

	int resultado1 = soma<int>(n1, n2);
	double resultado2 = soma<double>(n3, n4);

	std::cout << resultado1 << '\n';
	std::cout << resultado2 << '\n';
	std::cout << std::endl;
	std::cout << fixed_multiply<int, 2>(10) << '\n';


	return 0;
}