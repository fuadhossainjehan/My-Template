#include<bits/stdc++.h>
using namespace std;

long long ncr(long long n,long long r)
{
    long long ans=1;
    for(long long i=1;i<=n;i++)
        ans=ans*i;
    for(long long i=1;i<=r;i++)
        ans=ans/i;
    for(long long i=1;i<=n-r;i++)
        ans=ans/i;
    return ans;
}

int main ()
{
    int n,k;
    cin>>n>>k;
    cout<<ncr(n,k)<<endl;
}
