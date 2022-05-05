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
	std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
	{
		std::weak_ptr<UDT> ptr2 = ptr1;
		cout<<"use count = " << ptr2.use_count() << endl;
	}
	cout<<"use count = " << ptr1.use_count() << endl;
	
    return 0;
}