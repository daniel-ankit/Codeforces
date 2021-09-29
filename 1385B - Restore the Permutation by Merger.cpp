#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define LL long long int
#define TEST LL T;cin >> T; while (T--)

int main()
{
    TEST
    {
        LL N;
        cin >> N;
        LL A[2 * N];
        for (int i = 0; i < 2 * N; i++)
            cin >> A[i];
        int i, j;
        for (i = 0; i < 2*N; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (A[i] == A[j])
                    break;
            }
            if (i == j)
                printf("%d ", A[i]);
        }
    }
    return 0;
}