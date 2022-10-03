#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,ans=0,cnt;
    cin>>n;
    num=n;
    while(n>0)
    {
        cnt=n%10;
        ans=(ans*10)+cnt;
        n=n/10;
    }
    if(num==ans)
        cout<<"Palindrome "<<endl;
    else
        cout<<"false"<<endl;
}
