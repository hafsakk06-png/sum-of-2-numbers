#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact = fact * n;
    }
}

int main() {
    cout << factorialN(4) << endl;
    cout << factorialN(55) << endl;
    return 0;
}