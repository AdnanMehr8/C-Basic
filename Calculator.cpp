#include <iostream>
int main()
{
	int num1;
	std::cout << "Enter first number: " << std::endl;
	std::cin >> num1 ;
	int num2;
	std::cout << "Enter second number: " << std::endl;
	std::cin >> num2 ;
	char op=0;
	std::cout << "Choose the operator(+,-,*,/): " << std::endl;
	std::cin >> op ; 
	int result = 0;
	
	switch(op)
	{
		case '+':
		{
			result = num1+num2;
			break;
		}
		case '-':
		{
			result = num1-num2;
			break;
		}
		case '*':
		{
			result = num1*num2;
			break;
		}
		case '/':
		{
			result = num1/num2;
			break;
		}
		default:
		{
			std::cout << "Invalid operation" << std::endl;
		}
	}
	std::cout << "Result = " << result << std::endl;
	return 0;
}
