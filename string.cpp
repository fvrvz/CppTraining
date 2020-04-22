#include <iostream>
#include <string>

int main()
{
	std::string str;

	std::cout<<"Enter any string and press enter: ";
	getline(std::cin, str);

	std::cout<<"You just entered: "<<str<<std::endl;
	return 0;
}
