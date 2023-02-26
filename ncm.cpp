#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int ans=1,n,m;
        cin>>n>>m;
        vector<int>a(n+1);
        for(int i=0; i<n+1; i++)
        {
            for(int j=1; j<=i; j++)
            {
                ans=j*ans;
            }
            a[i]=ans;
            ans=1;
        }
        cout<<a[n]/a[m]*a[n-m]<<endl;
    }
}
