#include <iostream>
using namespace std;
 
int main()
{
    int n, nA = 0, nD = 0;
    cin >> n;
    string A;
    cin >> A;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'A')
            nA++;
        else
            nD++;
    }
    if (nA > nD)
        cout << "Anton";
    else if (nA < nD)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}