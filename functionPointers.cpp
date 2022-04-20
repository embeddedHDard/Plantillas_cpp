#include <iostream>

typedef int (*PFnIntegerOperations)(int,int); //function pointer for functions with typedef: int name(int, int)

using namespace std;
	
	int add(int x, int y){
		return x+y;
	}
	
	int multiply(int x, int y){
		return x*y;
	}
	

int main()
{
	//Definition of the pointer function, called op
	PFnIntegerOperations op;
	
	std::cout << "1 for add 2 for multiply: " << std::endl;
	int n;
	cin >> n;
	if(n == 1){	
		op = add;		
	}
	else if (n==2) { 
		op = multiply;
	}
	else{
		std::cout << "Not a valid operation" << std::endl;
		return -1;
	}
	int x,y;
	std::cout << "Enter the first value: " << std::endl;
	cin>>x;
	std::cout << "Enter the second value: " << std::endl;
	cin>>y;
	std::cout << "Operation: " << op(x,y) << std::endl;
	
    return 0;
}