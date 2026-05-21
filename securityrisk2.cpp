#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // dutch national flag algorithm
    int low = 0, mid = 0, high = n-1;
    
    while(mid <= high){
        if(arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if(arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }
    
    // print
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i != n-1) cout << " ";
    }
    
    return 0;
}