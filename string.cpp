#include <iostream>
#include <string>

int main()
{
	std::string str = "Hi! my name is Faraaz, and you entered the next line...";
	std::string str2;

	std::cout<<"Enter any string and press enter: ";
	getline(std::cin, str2);

	std::cout<<str<<std::endl;
	std::cout<<str2<<std::endl;
	return 0;
}
