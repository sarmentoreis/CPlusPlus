#include <iostream>
#include <fcntl.h>
#include <io.h>

int main()
{

	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"\u00BC" << std::endl;
	std::wcout << L"\u060F" << std::endl;
	system("PAUSE");
	return 0;
}