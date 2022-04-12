/*CREATING A VECTOR , PASSING TO A FUNCTION AND COMPARING*/
#include <iostream>

using namespace std;

bool Answer(int ints[], int x, int k){
    for (int i=0;i<x;i++){
        if(ints[i]==k){
            return true;
        }
    }
    return false;
}

int main()
{
    cout<<"Hello World"<<endl;
    
    int elements = 10;
    int vector[elements];
    for (int i = 0; i< elements; i++){
        vector[i] = 0;
        cout << "Elemento " << i << " inicializado a " << *vector << endl;
    }
    
    vector[3] = 5;
    
    cout << "The result is: " << Answer(vector, elements, 5);
    

    return 0;
}