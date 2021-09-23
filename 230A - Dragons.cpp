#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int S, N, a, b, i;
    cin >> S >> N;
    vector<pair<int, int>> V;
    for (int j = 0; j < N; j++)
    {
        cin >> a >> b;
        V.push_back(make_pair(a, b));
    }
    sort(V.begin(), V.end());
    for (i = 0; i < N; i++)
    {
        if (V[i].first >= S)
        {
            cout << "NO";
            return 0;
        }
        S += V[i].second;
    }
    cout << "YES";
    return 0;
}