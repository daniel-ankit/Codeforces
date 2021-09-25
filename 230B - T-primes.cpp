/*
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    if (n <= 1)
        return false;
    for (long long int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int N, num, save;
    scanf("%lld", &N);
    while (N--)
    {
        scanf("%lld", &num);
        save = sqrt(num);
        if ((save*save == num) && (isPrime(save)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N, A, save, i;
    scanf("%lld", &N);
    while (N--)
    {
        scanf("%lld", &A);
        save = sqrt(A);
        for (i = 2; i * i < save; i++)
            if (save % i == 0) break;

        if (i*i>save && A>1 && save*save==A)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}