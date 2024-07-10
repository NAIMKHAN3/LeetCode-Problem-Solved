#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int reversedNumber = 0;

    while (n != 0) {
        int digit = n % 10;       
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    return reversedNumber;
}

int main() {
    int a;
    cin >> a;

    int reversedA = reverseDigits(a);
    cout << reversedA << endl;

    return 0;
}
