#include<bits/stdc++.h>
using namespace std;
void fibonacci(long long  a)
{
    long long fib[a+1];
    for(int i=0; i<=a; i++)
    {
        if(i==0||i==1)
            fib[i]=i;
        else
            fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[a]<<endl;
}

int main()
{
    long long n;
    cin>>n;
    fibonacci(n+1);
}
