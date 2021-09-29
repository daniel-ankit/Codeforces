#include <bits/stdc++.h>
using namespace std;
#define TEST int T; cin >> T; while (T--)

int main()
{
    TEST
    {
        int n;
        cin >> n;
        vector<int> A1(n), A2(n);
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> A1[i];
            A2[i] = A1[i];
        }
        sort(A2.begin(), A2.end());
        for (int i = 0; i < A2.size(); i++)
        {
            for (int j = i; j < A1.size(); j++)
            {
                if (A2[i] == A1[j])
                {
                    if (i == j)
                        continue;
                    vector<int> temp(3);
                    temp[0] = i + 1;
                    temp[1] = j + 1;
                    temp[2] = j - i;
                    ans.push_back(temp);
                    A1.erase(A1.begin() + j);
                    A1.insert(A1.begin() + i, A2[i]);
                    break;
                }
            }
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
    return 0;
}