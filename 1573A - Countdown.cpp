#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0, count=0;
        cin >> N;
        string num;
        cin >> num;
        string copy=num;
        for(int i=0; i<N; i++)
            sum+=int(num[i])-48;
        for(int i=0; i<N-1; i++)
        {
            if(num[i]!='0')
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}