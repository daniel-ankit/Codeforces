#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string S1, S2;
    cin >> S1 >> S2;
    reverse(S2.begin(), S2.end());
    if (S1 == S2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}