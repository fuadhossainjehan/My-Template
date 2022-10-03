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
    int mn=-10001;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
            ans++;
    }
    if(ans==n)
    {
        for(int i=0; i<n; i++)
        {
            mn=max(mn,a[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            int res=0;
            for(int j=i;j<n;j++)
            {
                res=res+a[j];
                mn=max(mn,res);
            }

        }
    }
    cout<<mn<<endl;
}
