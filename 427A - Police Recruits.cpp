#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0, n, count = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n < 0)
        {
            if (sum <= 0) 
            {
                count++;
                sum = 0;
            }
            else sum--;
        }
        else sum +=n;
    }
    cout << count;
    return 0;
}