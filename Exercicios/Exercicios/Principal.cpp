#include <iostream>
#include <iomanip>
#include "Metodos.h"


int main()
{
    double ValorRaio;

    setlocale(LC_ALL, "PORTUGUESE");

    // Ex 1
    std::cout << "* Exercicio 1 * - Escreva um programa que pede o raio de um círculo, e em seguida " <<
        "exiba o perímetro e área do círculo.\n" << '\n';
    std::cout << "Entre com o raio do círculo: ";
    std::cin >> ValorRaio;
    std::cout << "\tA área do círculo é " << CalculaAreaCirculo(ValorRaio) << std::endl;
    std::cout << "\tO perímetro do círculo é " << CalculaPerimetroCirculo(ValorRaio) << std::endl;
    std::cout << "\tO diâmetro do círculo é " << CalculaDiametroCirculo(ValorRaio) << std::endl;
    system("PAUSE");
    system("CLS");

    // Ex 2
    std::cout << "* Exercicio 2 * - Faça um programa que recebe o raio de uma esfera e calcula seu volume.\n"
        << '\n';
    std::cout << "Entre com o raio do círculo: ";
    std::cin >> ValorRaio;
    std::cout << "\tO volume do círculo é " << CalculaVolumeEsfera(ValorRaio) << std::endl;
    system("PAUSE");
    system("CLS");

    // Ex 3 
    int Anos;

    std::cout << "* Exercicio 3 * - Faça um programa que recebe um inteiro, representado um valor em anos. " <<
        "Mostre quantos dias tem esse intervalo de tempo, assumindo que um ano tenha 365 dias.\n" << '\n';
    std::cout << "Entre com a quantidade de anos: ";
    std::cin >> Anos;
    std::cout << "\tA quantidade de dias em " << Anos << " ano(s) é " << CalculaDias(Anos) << " dias." << std::endl;
    system("PAUSE");
    system("CLS");

    // Ex 4
    int Horas{-1};
    int Minutos{-1};

    std::cout << "* Exercicio 4 * - Faça um programa que receba duas variáveis: o valor das horas e do minutos. " <<
        "Em seguida, converta tudo para minutos e também para segundos.\n" << '\n';
    while (Horas < 0)
    {
        std::cout << "Digite a hora: ";
        std::cin >> Horas;
    }
    while (Minutos < 0 || Minutos >= 60)
    {
        std::cout << "Digite os minutos: ";
        std::cin >> Minutos;
    }

    std::cout << "\t[Digitado]\n" << std::endl;
    std::cout << "\tHora: " << Horas << '\n';
    std::cout << "\tMinuto: " << Minutos << '\n' << std::endl;

    std::cout << "\tConvertendo para minutos -> " << HorasToMinutos(Horas, Minutos) << '\n';
    std::cout << "\tConvertendo para segundos -> " << MinutosToSegudos(Horas, Minutos) << '\n';
    system("PAUSE");
    system("CLS");

    // Ex 5
    float Celsius;
    std::cout << "* Exercicio 5 * - Crie um programa que receba a temperatura em graus Celsius e " <<
        "converta para Fahrenheit.\n" << '\n';
    std::cout << "Entre com a temperatura em graus Celsius: ";
    std::cin >> Celsius;
    std::cout << "\tTemperatura em Fahrenheit -> " << CelsiusToFahren(Celsius) << "°F" << '\n';
    system("PAUSE");
    system("CLS");

    // Ex 6
    float Fahrenheit;
    std::cout << "* Exercicio 6 * - Crie um programa que receba a temperatura em graus Fahrenheit e " <<
        "converta para Celsius.\n" << '\n';
    std::cout << "Entre com a temperatura em graus Fahrenheit: ";
    std::cin >> Fahrenheit;
    std::cout << "\tTemperatura em Celsius -> " << FahrenToCelsius(Fahrenheit) << "°C" << '\n';
    system("PAUSE");
    system("CLS");


    //Ex 7
    float Valor;
    float Porcentagem;
    std::cout << "* Exercicio 7 * - Faça um programa que receba um valor/porcentagem do usuário e calcule" <<
        " o adicional.\n" << '\n';
    std::cout << "Entre com o valor: ";
    std::cin >> Valor;
    std::cout << "Entre com a porcentagem: ";
    std::cin >> Porcentagem;
    Porcentagem = Porcentagem / 100;

    std::cout << "\tValor original -> " << Valor << ".\n";
    std::cout << "\tValor com acréscimo de " << (Porcentagem * 100) << "% -> " << std::setprecision(5)
        << (Valor * Porcentagem) << std::endl;
    system("PAUSE");
    system("CLS");


    
}