#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    int R, C, Q;
    cin >> R >> C >> Q;
    int A[1001][1001], row[1001], col[1001];
    
    for (int r = 1; r <= R; ++r)
        row[r] = r;
    for (int c = 1; c <= C; ++c)
        col[c] = c;
    for(int i=1; i<=R; ++i)
    {
        for(int j=1; j<=C; ++j)
            scanf("%d", &A[i][j]);
    }

    while (Q--)
    {
        char s[2];
        int x, y;
        scanf("%s %d %d", s, &x, &y);
        switch (s[0])
        {
        case 'r':
            swap(row[x], row[y]);
            break;
        case 'c':
            swap(col[x], col[y]);
            break;
        case 'g':
            printf("%d\n", A[row[x]][col[y]]);
            break;
        default:
            break;
        }
    }
    return 0;
}