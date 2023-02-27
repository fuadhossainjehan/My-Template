#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int ans=0;
            for(int f=0;f<n;f++)
            {
                if(a[i]==a[f])
                    ans++;
            }
            cnt=max(cnt,ans);
            cout<<"Occurences of "<<a[i]<<cnt<<endl;
        }



    }
}
