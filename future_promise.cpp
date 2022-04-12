#include <iostream>
#include <thread>
#include <future>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long int ull;

void findOdd(std::promise<ull>&& OddSumPromise, ull start, ull end){
    ull OddSum = 0;
    for (ull i = start; i<= end; ++i){
        if (i&1){
            OddSum+=1;
        }
    }
    OddSumPromise.set_value(OddSum);
}

int main()
{
    ull start = 0, end = 1900;
    std::promise<ull> OddSum;
    std::future<ull> OddFuture = OddSum.get_future();
    
    cout<<"Thread created!!" << endl;
    std::thread t1(findOdd, std::move(OddSum), start, end);
    
    cout<< "Waiting for the result" << endl;
    cout<< "The number of odd numbers in that range is: " << OddFuture.get() << endl;
    cout<< "completed!!" << endl;
    t1.join();

    return 0;
}