#include <iostream>
#include <ctime>

int main()
{

	time_t Data = time(0);

	tm timeinfo;

	localtime_s(&timeinfo, &Data);

	std::cout << timeinfo.tm_wday;
	
	

	return 0;
}