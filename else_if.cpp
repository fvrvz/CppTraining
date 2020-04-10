#include <iostream>

int main(){
	int marks;

	std::cout<<"Enter your marks: ";
	std::cin>>marks;

	if (marks>90)
	{
		std::cout<<"\nOutstanding! You have paseed with Grade A+"<<std::endl;
	}
	else if (marks<=90 && marks>80)
	{
		std::cout<<"\nExcellent! You have passed with Grade A"<<std::endl;
	}
	else if (marks<=80 && marks>70)
	{
		std::cout<<"\nGreat! You have passed with Grade B+"<<std::endl;
	}
	else if (marks<=70 && marks>60)
	{
		std::cout<<"\nGood! you have passed with Grade B"<<std::endl;
	}
	else if (marks<=60 && marks>50)
	{
		std::cout<<"\nAverage marks! Passed with Grade C"<<std::endl;
	}
	else if (marks<=50 && marks>40)
	{
		std::cout<<"\nTry Hard! You have passed with Grade D"<<std::endl;
	}
	else{
		std::cout<<"\nFailed! Try hard next time"<<std::endl;
	}
}
