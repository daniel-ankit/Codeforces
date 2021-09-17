#include <iostream>
using namespace std;

int main()
{
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;
    if(A!=B && A!=C && A!=D && B!=C && B!=D && C!=D)
        cout <<"0";
    else if (A == B && B == C && C == D)
        cout << "3";
    else if ((A == B && B == C && C != D) || (B == C && C == D && A != B) || (C == D && D == A && A != B) || (D == B && B == A && B != C) || (A == B && D == C && A != D) || (A == D && B == C && C != D) || (A == C && B == D && C != D))
        cout << "2";
    else cout << "1";
    return 0;
}
