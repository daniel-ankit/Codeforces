#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    int count = 0;
    cin >> s;
    sort(s.begin(), s.end());
    char save = s[0];
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] != save)
        {
            count++;
            save = s[i];
        }
    }
    (count%2 == 0)?(cout << "CHAT WITH HER!"): (cout << "IGNORE HIM!");
    return 0;
}