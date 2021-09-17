#include <iostream>
#include <array>
using namespace std;

int main()
{
    int N, P, Q, Pass = 0;
    cin >> N;
    cin >> P;
    int A1[P];
    for (int i = 0; i < P; i++)
        cin >> A1[i];
    cin >> Q;
    int A2[Q];
    for (int i = 0; i < Q; i++)
        cin >> A2[i];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            if (A1[j] == i)
            {
                Pass = 1;
                break;
            }
            else Pass=0;
        }
        if (Pass == 0)
        {
            for (int j = 0; j < Q; j++)
            {
                if (A2[j] == i)
                {
                    Pass = 1;
                    break;
                }
                else Pass=0;
            }
        }
        if(Pass==0)
        break;
    }
    if (Pass == 1)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}