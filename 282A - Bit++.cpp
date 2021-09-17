#include <iostream>
using namespace std;
 
int main()
{
    int t, x = 0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == '+')
            {
                x++;
                break;
            }
            else if (s[i] == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x;
    return 0;
}