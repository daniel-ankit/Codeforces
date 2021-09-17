#include <iostream>
using namespace std;
 
int main()
{
    long long int n;
    short int count = 0;
    cin >> n;
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }
    if (count == 7 || count == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
