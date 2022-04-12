/*CREATING A VECTOR CONTAINER, PASSING TO A FUNCTION AND COMPARING ITERATOR*/
#include <iostream>
#include <vector>

using namespace std;

bool Answer(vector<int> vect_cont, int x, int k){
    
    vector<int>::iterator iter= vect_cont.begin();
    for (int i=0;i<x;i++){
        if(*iter==k){
            return true;
        }
        iter++;
    }
    return false;
}

int main()
{
    int elements = 10;
    vector<int> vector1(elements);
    for (int i=0;i<elements;i++){
        vector1[i]=0;
    }
    vector<int>::iterator it= vector1.begin();
    
    while (it!=vector1.end()){
        *it=0;
        cout << *it <<endl;
        it++;
    }
    
    vector1 = {11,12,13,14,15,16,17,18,19,20};
    
    for (int i=0;i<elements;i++){
        cout << vector1[i]<<endl;
    }
    
    cout << "The result is: " << Answer(vector1, elements, 5)<<endl;