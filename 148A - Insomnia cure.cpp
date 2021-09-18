#include<iostream>
using namespace std;

int main()
{
    int A, B, C, D, N, count=0;
    cin >> A >> B >> C >> D >> N;
    for(int i=1; i<=N; i++)
    {
        if(i%A==0 || i%B==0 || i%C==0 || i%D==0)
        continue;
        else count++;
    }
    cout << N - count;
    return 0;
}

//  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
//     2     2     2     2      2     2     2     2     2     2     2     2
//        3        3        3         3        3        3        3        3
//           4           4            4           4           4           4
//              5               5              5              5
//  1                 7           11    13          17    19          23 