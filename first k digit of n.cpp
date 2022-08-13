#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n;
    cin>>n;

    double fact;

    fact=log10(n);

    double q=fact-(floor)(fact+0.0000000001);

    int k;

    cin>>k;

    double b=pow(10,q);
    for(int i=1;i<k;i++)
        b*=10.0;

    long long ans=(floor)(b+0.000000001);
    cout<<ans<<endl;
}
