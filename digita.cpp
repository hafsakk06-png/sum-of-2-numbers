#include <iostream>
using namespace std;

// calculate sum of digits of a number
int sumOfDigits(int num) {
    int digsum = 0;

    while(num > 0) {
        int lastdig = num%10;
        num/=10;

        digsum += lastdig;
    }
    return digsum;
}

int main() {
    cout <<"sum =" << sumOfDigits(25670) << endl;

    return 0;
}