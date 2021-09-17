#include <iostream>
using namespace std;
 
int main()
{
    int n, steps = 0;
    cin >> n;
    if (n > 5)
    {
        steps = n / 5;
        n = n % 5;
    }
    if (n != 0)
    {
        steps++;
        cout << steps;
    }
    else
        cout << steps;
    return 0;
}