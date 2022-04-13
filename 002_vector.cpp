#include <iostream>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <vector>	

using namespace std;

int main()
{

	std::vector<int> myVector{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //STL vector
	std::fill(myVector.begin(), myVector.end(), -1);
	
	for ( auto j : myVector ){
		cout << j << endl;
	}
	
	for (int i=1; i<=5; i++) myVector.push_back(i);
	
		for ( auto j : myVector ){
		cout << j << endl;
	}

    return 0;
}