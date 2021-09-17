#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    short int Opinion;
    while(n--)
    {
        cin >> Opinion;
        if(Opinion == 1)
        {
        cout << "HARD";
        return 0;
        }
    }
    cout << "EASY";
    return 0;
}