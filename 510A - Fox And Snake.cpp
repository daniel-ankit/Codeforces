#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    for (int i = 1; i <=M; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < N; j++)
                cout << "#";
            cout << endl;
        }
        else if (i % 2 == 0 && i % 4 != 0)
        {
            for (int j = 0; j < N - 1; j++)
                cout << ".";
            cout << "#" << endl;
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (int j = 0; j < N - 1; j++)
                cout << ".";
            cout << endl;
        }
    }
    return 0;
}