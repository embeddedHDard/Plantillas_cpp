#include <iostream>
#include <string>
#include <memory>

using namespace std;

class UDT{
	public:
		UDT(){cout<<"UDT created"<<endl;}
		~UDT(){cout<<"UDT destroyed"<<endl;}
};

int main()
{
	// Classical pointer
	/*int x = 42;
	int *ptr = &x;
	
	std::cout << "*ptr (value): " << *ptr << std::endl;
	std::cout << "ptr (address): " << ptr << std::endl;
	
	int* ptr2 = ptr;
	std::cout << "*ptr2 (value): " << *ptr2 << std::endl;
	std::cout << "ptr2 (address): " << ptr2 << std::endl;*/
	
	//100 pointers
	/*int* array = new int[100];
	
	for (int i=0; i< 100; i++){		
		array[i] = i;
	}
	
	int *ptr3 = array;
	
	std::cout << "*ptr3 (value): " << *ptr3 << std::endl;
	std::cout << "ptr3 (address): " << ptr3 << std::endl;
	
	int* ptr4 = ptr3;
	std::cout << "*ptr4 (value): " << *ptr4 << std::endl;
	std::cout << "ptr4 (address): " << ptr4 << std::endl;	
	
	delete[] array;*/
	
	// Creating one unique pointer
	
	//std::unique_ptr<UDT> Kike (new UDT);

	// Creating an array of unique pointers
	
	//std::unique_ptr<UDT[]> array (new UDT[100]);
	
	//Equivalent

	std::unique_ptr<UDT[]> array2 = std::make_unique<UDT[]>(10);
	
	
    return 0;
}