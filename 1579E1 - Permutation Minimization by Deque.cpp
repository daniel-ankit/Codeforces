#include <bits/stdc++.h>
using namespace std;
#define TEST long long int T; cin >> T; while (T--)

int main()
{
    TEST
    {
        int N;
        cin >> N;
        vector <int> V(N);
        for(int i=0; i<N; i++)
            cin >> V[i];
        int save = V[0];
        deque<int> A;
        A.push_front(V[0]);
        for(int i=1; i<N; i++)
        {
            if(V[i]<=save)
            {
                A.push_front(V[i]);
                save=V[i];
            }
            else
                A.push_back(V[i]);
        }
        while(A.empty() == false)
            {
                int front = A.front();
                A.pop_front();
                cout << front << " ";
            }
        cout << endl;
    }
    return 0;
}