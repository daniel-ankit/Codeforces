#include <iostream>
using namespace std;
 
int main()
{
    int N, F, H, count = 0;
    cin >> N >> F;
    for (int i = 0; i < N; i++)
    {
        cin >> H;
        if (H > F)
            count += 2;
        else
            count++;
    }
    cout << count << endl;
    return 0;
}