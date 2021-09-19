#include<iostream>
using namespace std;

int main()
{
    int N, even=0, odd=0, storeodd=0, storeeven=0;
    cin >> N;
    int Array[N];
    for(int i=0; i<N; i++)
        cin >> Array[i];
    for(int i=0; i<N; i++)
    {
        if(Array[i]%2==0)
        {
            even++;
            storeeven=i;
        }
        else
        {
            odd++;
            storeodd=i;
        }
    }
    if(even==1) cout << storeeven+1;
    else cout << storeodd+1;
    return 0;
}