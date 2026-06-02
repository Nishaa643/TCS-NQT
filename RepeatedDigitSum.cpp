#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleDigit(int n) {
    while (n >= 10) {
        n = digitSum(n);
    }
    return n;
}

int main() {
    int N, R;
    cin >> N >> R;

    if (R == 0) {
        cout << 0 << endl;
        return 0;
    }

    int sumOfDigits = digitSum(N);
    int result = sumOfDigits * R;
    cout << singleDigit(result) << endl;

    return 0;
}