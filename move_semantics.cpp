#include <iostream>
#include <string>

using namespace std;

int main()
{
	string myString = "Copy construct me";
	string newValue;
	
	std::cout << "myString: " << myString << std::endl;
	std::cout << "newValue: " << newValue << std::endl;
	
	newValue = std::move(myString);
	
	std::cout << "myString: " << myString << std::endl;
	std::cout << "newValue: " << newValue << std::endl;
	
    return 0;
}