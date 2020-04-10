#include <iostream>
#include "extern_var.cpp" //including the contents of a user definedfile

extern int count; //declaration of variable 'count'

int main()
{
	std::cout << "count: " << count << "\n";

	incrementCount(); //function call from included file

	std::cout << "count: " << count << "\n";

	return 0;
}
