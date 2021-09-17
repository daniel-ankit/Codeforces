#include<iostream>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    int Array[N], count=1;
    for(int i=0; i<N; i++)
        cin >> Array[i];
    for(int i=0; i<N-1; i++)
    {
        if (Array[i]!=Array[i+1])
        count++;
    }
    cout << count;;
    return 0;
}