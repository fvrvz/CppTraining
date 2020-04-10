#include <iostream>
int main(int argc, char const *argv[])
{
	int num1, num2, menu;
	int res;

	std::cout<<"Enter a number: ";
	std::cin>>num1;

	std::cout<<"\nEnter another number: ";
	std::cin>>num2;

	std::cout<<"\n---- Menu ----\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Reminder\n6. All operations\n";

	std::cout<<"Enter a number from menu: ";
	std::cin>>menu;

	switch(menu){
		case 1:
			res = num1 + num2;
			std::cout<<"Sum = "<<res<<std::endl;
			break;
		case 2:
			res = num1 - num2;
			std::cout<<"Difference = "<<res<<std::endl;
			break;
		case 3:
			res = num1 * num2;
			std::cout<<"Product = "<<res<<std::endl;
			break;
		case 4:
			res = num1 / num2;
			std::cout<<"Division = "<<res<<std::endl;
			break;
		case 5:
			res = num1 % num2;
			std::cout<<"Reminder = "<<res<<std::endl;
			break;
		case 6:
			std::cout<<"Sum = "<<num1 + num2;
			std::cout<<"\nDifference = "<<num1 - num2;
			std::cout<<"\nProduct = "<<num1 * num2;
			std::cout<<"\nDivision = "<<num1 / num2;
			std::cout<<"\nReminder = "<<num1 % num2<<std::endl;
			break;
	}
}
