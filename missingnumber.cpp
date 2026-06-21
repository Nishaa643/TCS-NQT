#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& nums) {
    int n = nums.size();

    int expected = (n+1) * (n + 2) / 2;
    int actual = 0;

    for(int num:nums){
        actual += num;
    }
    return expected - actual;

}
int main(){
    int n;
    cout<<"Enter the elements of the array: ";
    cin>>n;
    
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    cout<< "Missing number is: " << missingnumber(nums) << endl;
    return 0;
}