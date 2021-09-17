#include <iostream>
using namespace std;
 
int isnotvowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        return 0;
    return 1;
}
 
int main()
{
    string s, res;
    cin >> s;
    int j=0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) && isnotvowel(s[i]))
        {
            s[i] += 32;
            cout << "." << s[i];
        }
        else if (s[i] >= 97 && s[i] <= 122 && isnotvowel(s[i]))
            cout<< "." << s[i];
    }
    return 0;
}