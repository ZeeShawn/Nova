#include <iostream>
#include "Base.h"

int main() {
	std::cout << "hello world" << std::endl;

	Base *p = new Base();
	p->test();
	delete p;

	char temp;
	while (std::cin >> temp)
	{
		printf("%d\n", temp);
	}

	return 0;
}