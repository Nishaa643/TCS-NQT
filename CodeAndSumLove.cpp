#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ans=0,x;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        x=pow(2,x);
        if(x>99) ans+=x%100;
        else ans+=x;
    }
    cout<<ans%100;
    return 0;
}