#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool allsame(int Array[], int N)
{
    bool res = 1;
    for (int i = 0; i < N - 1; i++)
    {
        if (Array[i] == Array[i + 1])
            continue;
        else
            res = 0;
    }
    return res;
}

bool allzero(int Array[], int N)
{
    bool res = 1;
    for (int i = 0; i < N; i++)
    {
        if (Array[i] == 0)
            continue;
        else
            res = 0;
    }
    return res;
}

int main()
{
    int N, K;
    cin >> N >> K;
    int Array[N];
    for (int i = 0; i < N; i++)
        cin >> Array[i];
    if (allzero(Array, N))
    {
        cout << "0";
        return 0;
    }
    else if (allsame(Array, N))
    {
        cout << N;
        return 0;
    }
    int score = Array[K - 1], count = 0;
    for (int i = 0; i < N; i++)
    {
        if (Array[i] != 0 && Array[i] >= score)
            count++;
    }
    cout << count;
    return 0;
}