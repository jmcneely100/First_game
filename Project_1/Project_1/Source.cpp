#include <iostream>
int main()
{
	std::cout << "Hello World" << std::endl;
	return 0;
}

class foo {
	int result;
public:
	int bar(int a, int b)
	{
		result = a + b;
		return result;
	}
};