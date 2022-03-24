#include <iostream>

void Increase(void* data, int psize)
{
	if (psize == sizeof(char))
	{
		char* pChar = nullptr;
		pChar = (char*)data;
		++(*pChar);
	}
	else if (psize == sizeof(int))
	{
		int* pInt = nullptr;
		pInt = (int*)data;
		++(*pInt);
	}
}

int main()
{
	char a = 'x';
	int b = 1602;
	Increase(&a, sizeof(a));
	Increase(&b, sizeof(b));
	std::cout << a << ", " << b << '\n';

	return 0;
}