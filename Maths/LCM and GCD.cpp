#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int g = gcd(a, b);
    int l = lcm(a, b);
    cout << l << " " << g << endl;
    return 0;
}
