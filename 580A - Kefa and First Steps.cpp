#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Array[N], count=1, maxcount=1;
    for(int i=0; i<N; i++)
        cin >> Array[i];
    for(int i=0; i<N-1; i++)
    {
        if (Array[i]<=Array[i+1])
            count++;
        else count=1;
        if(count > maxcount)
            maxcount = count;
    }
    cout << maxcount;
    return 0;
}