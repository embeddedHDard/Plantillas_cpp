#include <iostream>
#include <numeric>
#include <iterator>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	//int ids[100]; // Raw array
	std::array<int, 10> ids; //STL array
	auto it = ids.begin();
	std:iota(begin(ids), end(ids), 0); //Rellena el vector de 0 a 99 en este caso

	
	for (it; it != ids.end(); it++){
		cout << *it << endl;
	}
	
	
	//Range based
	for ( int i : ids ){
		cout << ids[i] << endl;
	}

    return 0;
}