#include<bits/stdc++.h>
#include<algorithm>
#include<bitset>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long 
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n%1000000007
#define VLL vector <long long>
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    Radhe Krishna
    int N, N1=0, N2=0, N3=0, N4=0, ans=0;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
        if(A[i]==1) N1++;
        else if (A[i]==2) N2++;
        else if(A[i]==3) N3++;
        else N4++;
    }
    sort(A, A+N);
    if(N==1 || (N==2 && ((A[0]==1 && A[1]==2) || (A[0]==1 && A[1]==3))))
        ans=1;
    else if(N3+N4==N)
        ans+=(N3+N4);
    else if(N1==N)
        (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
    else if(N2==N)
        (N2%2==0)?(ans+=N2/2):(ans+=(N2/2+1));
    else if(N1+N2==N)
    {
        ans+=N2/2;
        if(N2%2==1 && N1>=2)
        {
            N1-=2;
            ans++;
            (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
        }
        else (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
    }
    else if(N1+N3==N)
    {
        if(N3>=N1)
        ans+=N3;
        else
        {
            ans+=N3;
            N1-=N3;
            (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
        }
    }
    else if(N1+N4==N)
    {
        ans+=N4;
        (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
    }
    else if(N3+N2==N || N4+N2==N)
    {
        ans+=(N3+N4);
        (N2%2==0)?(ans+=N2/2):(ans+=(N2/2+1));
    }
    else if(N1+N4+N3==N)
    {
        ans+=N4;
        if(N3>=N1)
        ans+=N3;
        else
        {
            ans+=N3;
            N1-=N3;
            (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
        }
    }
    else if(N4+N2+N3==N)
    {
        ans+=(N4+N3);
        (N2%2==0)?(ans+=N2/2):(ans+=(N2/2+1));
    }
    else if(N4+N2+N1==N)
    {
        ans+=N4;
        ans+=N2/2;
        if(N2%2==1 && N1>=2)
        {
            N1-=2;
            ans++;
            (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
        }
        else (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
    }
    else
    {
        ans+=N4;
        if(N3>=N1)
        {
            ans+=N3;
            N1=0;
            (N2%2==0)?(ans+=N2/2):(ans+=(N2/2+1));
        }
        else
        {
            ans+=N3;
            N1-=N3;
            ans+=N2/2;
            if(N2%2==1 && N1>=2)
            {
                N1-=2;
                ans++;
                (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
            }
            else (N1%4==0)?(ans+=N1/4):(ans+=(N1/4+1));
        }
    }
    cout << ans;
    return 0;
}