#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    int p=1;
    for(auto i:s) 
        p*=(i-'0');
    cout<< p;
}