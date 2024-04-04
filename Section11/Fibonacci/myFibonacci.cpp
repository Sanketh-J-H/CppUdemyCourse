#include <iostream>
#include <stdint.h>
#include <vector>

using namespace std;

int main()
{
    cout << "Write the sequence number up untill you want to find the  Fibonacci series of : ";
    uint32_t num{};
    cin>>num;

    vector <uint64_t> series{};
    uint64_t result{0};

    for(int count{0} ; count <= num ; count += 1)
    {
        result = 0;
        if (count == 0 || count == 1)
        {
            result = 1 ;
            series.push_back(result);
        }
        else
        {
            result = series.at(count-1 ) + series.at(count -2);
            series.push_back(result);
        }
    }

    for (auto element : series)
        cout<<element << " ";

    cout<<endl;
    return 0;
} 