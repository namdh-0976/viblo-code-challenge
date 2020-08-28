#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int temp;
    while(b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);

    return 0;
}
