#include <iostream>

void manipulate(double* value) {
	std::cout << "2. value of int in manipulate: " << *value << std::endl;
	*value = 10;
	std::cout << "3. value of int in manipulate: " << *value << std::endl;
}

int main()
{
	int nValue = 8;
	int* pnValue = &nValue;

	std::cout << "int value: " << nValue << std::endl;
	std::cout << "pointer to int address: " << pnValue << std::endl;
	std::cout << "itn value via pointer:  " << *pnValue << std::endl;
	std::cout << "======================== " << std::endl;

	double dValue = 123.4;

	std::cout << "1. dvalue: " << dValue << std::endl;
	manipulate(&dValue);
	std::cout << "4. dvalue : " << dValue << std::endl;

	return 0;
}