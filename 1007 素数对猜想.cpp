#include <iostream>
#include<vector>
#include <algorithm>
#include<cmath>

using namespace std;
int main() {
   int number;
    cin >> number;
    vector<int> prime;
    int tag = 0;
    prime.push_back(3);
    for (int i = 3; i <= number; i += 2)
    {
        tag = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                tag = 1;
                break;
            }
        }
        if (tag == 0)
            prime.push_back(i);
    }
    int res = 0;
    for (int i = 0; i < prime.size() - 1; i++)
    {
        if (prime[i + 1] - prime[i] == 2)
            res++;
    }
    cout << res;
    return 0;
}