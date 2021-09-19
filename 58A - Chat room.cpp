#include <iostream>
using namespace std;

int main()
{
    string S1, save= "hello";
    int i, j=0, f = 0;
    cin >> S1;
    for (i = 0; i < 5; i++)
    {
        while(S1[j]!='\0')
        {
            if (save[i] == S1[j])
            {
                f++;
                j++;
                break;
            }
            else 
            j++;
        }
    }
    if (f == 5) cout << "YES";
    else cout << "NO";
    return 0;
}