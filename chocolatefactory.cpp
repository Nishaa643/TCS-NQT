#include<bits/stdc++.h>
using namespace std;
int main(){
int n,j=0;
cin >> n;
int arr[n]={0};
for(int i =0;i<n;i++){
    int x;
    cin >> x;
    if(x!=0){
        arr[j]=x;
        j++;
    }

}
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}