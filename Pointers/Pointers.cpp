#include <iostream>

void manipulate(int value) {
	value = 10;
	std::cout << "value of int in manipulate: " << value << std::endl;
}

int main()
{
	int nValue = 8;
	int* pnValue = &nValue;

	std::cout << "int value: " << nValue << std::endl;
	std::cout << "pinter to int address: " << pnValue << std::endl;
	std::cout << "======================== " << pnValue << std::endl;


	return 0;
}