#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10;
    b = b + 10;
    return a + b;
}

int main() {
    int a = 14 , b = 23;
    cout << sum (a,b) << endl;

    return 0;
}