#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum = 1;
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        sum=i^sum;    
    }
    cout << sum << endl;
}
