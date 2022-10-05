#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int a=0;a<t;a++)
    {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(i+j>=n-1&&i+j<=n+2*i-1)
                cout<<'*';
            else
                cout<<' ';
        }

        cout<<endl;
    }
}
}
