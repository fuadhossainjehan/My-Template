#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,x;
        cin>>n;
        vector<int>a(1001);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
        }
        for(int i=0;i<10;i++)
        {
            cout<<"Occurrence of "<<i<<' '<<a[i]<<endl;
        }



    }
}
