#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int n, sumeven = 0, sumodd = 0;
        cin >> n;
        if (n % 4 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
                sumeven += i;
            }
            for (int i = 1; i < n - 1; i = i + 2)
            {
                cout << i << " ";
                sumodd += i;
            }
            cout << sumeven - sumodd;
            cout << endl;
        }
    }
    return 0;
}

/*

4
2 4 1 5

6
2 4 6 1 3 

8
2 4 6 8 1 3 5 11

*/
