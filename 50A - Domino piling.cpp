#include <iostream>
using namespace std;

int main()
{
    int M, N, A;
    cin >> M >> N;
    if ((M * N) % 2 == 0)
        A = (M * N) / 2;
    else
        A = ((M * N) - 1) / 2;
    cout << A;
}
