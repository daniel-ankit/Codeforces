#include<iostream>
using namespace std;
 
int main()
{
    long long int N, Sum=0;
    cin >> N;
    if (N % 2 == 0)
        Sum = N/2;
    else
        Sum = -((N + 1) / 2);
    cout << Sum;
    return 0;
}