#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
      cin >> arr[i];
    int d, x;
    cin >> d >> x;
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
 }
    if (d % 2 != 0) {
        if (countEven == 0)
            cout << "0" << endl;
        else
            cout << countEven * x << endl;
    } else {
        if (countOdd == 0)
            cout << "0" << endl;
        else
            cout << countOdd * x << endl;
    }
    return 0;
}