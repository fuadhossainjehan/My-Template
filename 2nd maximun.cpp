#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx=0;
    for(int i=0; i<n; i++)
        mx=max(mx,a[i]);
    for(int i=0; i<n; i++)
        if(a[i]==mx)
        {
            a[i]=0;
            break;
        }
    int mn=0;
    for(int i=0; i<n; i++)
        mn=max(mn,a[i]);
}
