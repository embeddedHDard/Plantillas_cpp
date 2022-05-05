#include <iostream>
#include <string>
	
using namespace std;

class Array{
	public: 
		Array(){
			data = new int [10];
			for (int i=0; i<10; i++){
				data[i] = i*i;
			}
		}
		~Array(){
			delete[] data;
		}
		void PrintingData(){
			for (int i=0; i<10; i++){
				cout << data[i] << endl;
			}
		}
		void SetData(int index, int value){
			data[index] = value;
		}
		
	private:
		int *data;
};

int main()
{
	Array myArray;
	myArray.SetData(0,10000);
	myArray.PrintingData();	


    return 0;
}