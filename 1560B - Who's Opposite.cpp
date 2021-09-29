#include<iostream>
using namespace std;
#define TEST long long int T; cin >> T; while (T--)

int main()
{
    TEST
    {
        int A, B, C;
        cin >> A>> B>>C;
        int save = abs(A-B);
        if(C>2*save || B>2*save || A>2*save)
        cout << "-1" << endl;
        else
        {
            if(C+save>=1 && C+save<=2*save)
            cout << C+save;
            else if(C-save>=1 && C-save<=2*save)
            cout << C-save;
            else cout << -1;
            cout << endl;
        }
    }
    return 0;
}