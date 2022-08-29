#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>cnt;
    for(int i=0;i<s.size();i++)
        cnt[s[i]]++;
    int mx=0;
    char ans;
    for(auto i:cnt)
    {
        int curocc=i.second;
        if(curocc>mx)
        {
            mx=curocc;
            ans=i.first;
        }
    }
    for(char i='0';i<='9';i++)
        cout<<cnt[i]<<endl;
}
