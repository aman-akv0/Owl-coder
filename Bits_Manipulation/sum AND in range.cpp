#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int res = a;
    int n;
    cin >> n;

    for (int i = a+1; i <= n; i++) {
        res=i^res;    
    }
    cout << res << endl;
}
