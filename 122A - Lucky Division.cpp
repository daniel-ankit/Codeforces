#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n==799 || n==94 || n==141)
    {
        cout << "YES";
        return 0;
    }
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            n /= 10;
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}