#include <iostream>
using namespace std;
 
int compare(string s1, string s2)
{
    if (s1 > s2)
        return 1;
    if (s1 < s2)
        return -1;
    return 0;
}
 
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
            s1[i] = s1[i] + 32;
        if (s2[i] >= 65 && s2[i] <= 90)
            s2[i] = s2[i] + 32;
    }
    cout << compare(s1, s2);
    return 0;
}
