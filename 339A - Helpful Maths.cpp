#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int n1 = 0, n2 = 0, n3 = 0, j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            n1++;
        else if (s[i] == '2')
            n2++;
        else if (s[i] == '3')
            n3++;
    }
    while (n1--)
    {
        s[j] = '1';
        j += 2;
    }
    while (n2--)
    {
        s[j] = '2';
        j += 2;
    }
    while (n3--)
    {
        s[j] = '3';
        j += 2;
    }
    cout << s;
    return 0;
}