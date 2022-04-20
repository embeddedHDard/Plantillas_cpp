#include <iostream>
#include <vector>
#include <algorithm>
	
	void passByReference(std::vector<int>& alias){
		alias[0] = 1;
	}
	
	void passByValue(std::vector<int> x){
		x[0] = 1;
	}
	

int main()
{
	std::vector<int> x(1000);
	std:fill(std::begin(x), std::end(x), 1);
	
	passByValue(x);
	passByReference(x);
	
    return 0;
}