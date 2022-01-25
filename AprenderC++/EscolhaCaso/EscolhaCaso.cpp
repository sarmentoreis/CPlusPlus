#include <iostream>


using namespace std;
int main()
{
	int Num1, Num2;
	char Operacao;

	cout << "###-Switch case-###" << endl;

	cout << "\nDigite um numero: ";
	cin >> Num1;
	cout << "\nDigite outro numero: ";
	cin >> Num2;

	cout << "\nQual operacao deseja efetuar? \n+ Adicao \n- Subtracao \n* Multiplicacao \n/ Divisao\n";
	cout << "\nDigite sua opcao: ";
	cin >> Operacao;

	switch (Operacao)
	{
	case '+':
		cout << "Adicao: " << Num1 + Num2 << endl;
		break;
	case '-':
		cout << "Subtracao: " << Num1 - Num2 << endl;
		break;
	case '*':
		cout << "Multiplicao: " << Num1 * Num2 << endl;
		break;
	case '/':
		cout << "Divisao: " << Num1 / Num2 << endl;
	default:
		cout << "\nVoce nao digitou um operador valido!" << endl;
		break;
	}


	return 0;
}