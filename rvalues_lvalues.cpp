#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1="Enrique";
	string s2 = ", esto es una cadena larguísima";
	string&& s3 = s1+s2;	
	std::cout << "El valor de la cadena es: " << s3 << std::endl;
	
    return 0;
}