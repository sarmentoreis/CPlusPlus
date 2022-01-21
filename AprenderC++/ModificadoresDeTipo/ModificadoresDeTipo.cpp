#include <limits>
#include <iostream>
int main()
{


	// \t insere uma tabulação
	std::cout << "Tipo\t\t\t Minimo\t\t\t Maximo\n\n";
	std::cout << "bool\t\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t\t"
		<< +std::numeric_limits<int>::min() << '\t' << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t\t"
		<< +std::numeric_limits<long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int\t"
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t\t"
		<< +std::numeric_limits<long long int>::min() << '\t'
		<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << '\n' << '\n';


	system("PAUSE");
}