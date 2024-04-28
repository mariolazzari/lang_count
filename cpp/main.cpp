#include <chrono>
#include <iostream>

using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    unsigned long count = 1000000000;

    while (count>0){
        count--;
    }

    auto end = high_resolution_clock::now();
    auto elapsed = duration_cast<microseconds>(end - start);

    std::cout << "Count: " << elapsed.count();

    return 0;
}