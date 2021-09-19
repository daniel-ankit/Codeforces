#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, t = 1, digit=0;
        cin >> N;
        int M=N;
        while(M > 0)
        {
            if(M%10 !=0)
            digit++;
            M/=10;
        }
        cout << digit <<endl;
        while (N > 0)
        {
            if (N % 10 != 0)
                cout << (N % 10) * t << " ";
            t *= 10;
            N /= 10;
        }
        cout << endl;
    }
    return 0;
}