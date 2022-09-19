#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans;
    string s;
    cin>>s;
    vector<int>a;
    int i=0;
    while(i<s.size())
    {
        int j=i;
        while(s[i]==s[j])
        {
            j++;
        }
        a.push_back(j-i);
        i=j;
    }
    

}
