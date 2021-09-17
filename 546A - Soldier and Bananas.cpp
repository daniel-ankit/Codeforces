#include<iostream>
using namespace std;
 
int main()
{
    int k, n, w, req=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        req+=(k*i);
    }
    if(req>n)
    cout << (req-n);
    else cout << "0";
    return 0;
}