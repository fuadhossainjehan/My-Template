#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>a(n),s(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>s[i];
    }
    set<int>st;
    for(int i=0; i<n; i++)
        st.insert(a[i]);
    for(int i=0; i<m; i++)
        st.insert(s[i]);
    int i=0;
    for(auto x:st)
    {
        cout<<x;
        if(i==s.size()-1)
            break;
          cout<<' ';
          i++;
    }
}

