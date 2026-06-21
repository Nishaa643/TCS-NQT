/*An Armstrong Number is a number that is equal to the sum of
 its digits each raised to the power of the number of digits*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int digits = 0;
    int temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    // Calculate sum of digits raised to power digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number";
    else
        cout << original << " is not an Armstrong Number";

    return 0;
}