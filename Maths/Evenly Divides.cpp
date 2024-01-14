#include<bits/stdc++.h>
using namespace std;

bool evenlyDivides(int num, int digit) {
    return digit != 0 && num % digit == 0;
}

int main() {
    int N;
    cin >> N;

    int originalNumber = N;
    int count = 0;

    while (originalNumber != 0) {
        int digit = originalNumber % 10;

        if (evenlyDivides(N, digit)) {
            count++;
        }
        originalNumber /= 10;
    }

    cout << count << endl;
    return 0;
}
